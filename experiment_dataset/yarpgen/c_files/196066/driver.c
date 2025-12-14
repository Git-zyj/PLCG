#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2656164956U;
unsigned long long int var_1 = 11355626678806918324ULL;
unsigned long long int var_5 = 12293142357189414926ULL;
signed char var_7 = (signed char)-48;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 3851006902U;
int var_11 = 1471671069;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned char var_13 = (unsigned char)178;
int var_14 = -909975285;
unsigned int var_15 = 2257509923U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
