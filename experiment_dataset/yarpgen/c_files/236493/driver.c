#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3978513925U;
unsigned short var_9 = (unsigned short)12770;
long long int var_11 = 1088996032334618283LL;
unsigned int var_16 = 453802555U;
int zero = 0;
unsigned short var_20 = (unsigned short)337;
unsigned int var_21 = 3816849722U;
unsigned int var_22 = 3153182888U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
