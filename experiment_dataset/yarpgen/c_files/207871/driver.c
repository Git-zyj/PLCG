#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)38356;
unsigned short var_2 = (unsigned short)31522;
long long int var_7 = -5816303700460722708LL;
int zero = 0;
unsigned long long int var_11 = 3798470495076425974ULL;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 17535112040624854835ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
