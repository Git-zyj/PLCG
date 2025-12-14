#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1173016684U;
unsigned int var_7 = 416658364U;
unsigned short var_8 = (unsigned short)4995;
unsigned int var_9 = 2721596951U;
unsigned int var_10 = 748157710U;
int zero = 0;
long long int var_12 = 4985729641587213494LL;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
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
