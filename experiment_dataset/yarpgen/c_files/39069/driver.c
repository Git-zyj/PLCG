#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 577480206;
long long int var_1 = -8679689678484267581LL;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)70;
unsigned short var_9 = (unsigned short)64358;
unsigned short var_11 = (unsigned short)33780;
unsigned long long int var_12 = 10818954524324191785ULL;
unsigned short var_14 = (unsigned short)19005;
int zero = 0;
int var_19 = -1549100536;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)84;
unsigned long long int var_22 = 11869491217395348581ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
