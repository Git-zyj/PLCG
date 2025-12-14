#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)15;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)77;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)69;
signed char var_6 = (signed char)103;
signed char var_7 = (signed char)122;
short var_8 = (short)-31064;
unsigned int var_9 = 1778730794U;
int zero = 0;
unsigned char var_10 = (unsigned char)152;
signed char var_11 = (signed char)-68;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)194;
short var_14 = (short)32531;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
