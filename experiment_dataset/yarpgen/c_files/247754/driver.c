#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)129;
_Bool var_1 = (_Bool)1;
signed char var_3 = (signed char)88;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
short var_6 = (short)-2327;
unsigned short var_8 = (unsigned short)41248;
_Bool var_10 = (_Bool)0;
short var_16 = (short)21404;
int zero = 0;
int var_19 = 1934136407;
unsigned short var_20 = (unsigned short)42722;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)167;
unsigned long long int var_23 = 17218408110342854628ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
