#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)10572;
_Bool var_2 = (_Bool)1;
short var_4 = (short)4350;
short var_5 = (short)29512;
unsigned long long int var_6 = 16604427180059764751ULL;
long long int var_7 = -4186458592768837663LL;
short var_9 = (short)-29949;
int zero = 0;
signed char var_14 = (signed char)33;
unsigned int var_15 = 4262971437U;
long long int var_16 = -610732908313258940LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
