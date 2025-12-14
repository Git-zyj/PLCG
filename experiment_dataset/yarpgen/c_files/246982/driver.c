#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1642190257;
unsigned short var_3 = (unsigned short)40293;
unsigned char var_4 = (unsigned char)58;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 8914218547255677053ULL;
signed char var_7 = (signed char)-14;
unsigned short var_8 = (unsigned short)33712;
_Bool var_9 = (_Bool)0;
unsigned short var_11 = (unsigned short)15333;
unsigned long long int var_14 = 413891480418494859ULL;
unsigned int var_15 = 3487995955U;
unsigned int var_17 = 2403134774U;
signed char var_18 = (signed char)-84;
int zero = 0;
signed char var_19 = (signed char)104;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)58541;
_Bool var_22 = (_Bool)1;
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
