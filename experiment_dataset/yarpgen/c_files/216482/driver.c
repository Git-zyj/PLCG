#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1251413681;
unsigned char var_6 = (unsigned char)65;
int var_8 = -386704266;
short var_10 = (short)-13349;
unsigned short var_11 = (unsigned short)21044;
unsigned int var_13 = 3626544798U;
int var_17 = -776011976;
_Bool var_18 = (_Bool)0;
int zero = 0;
int var_19 = -303636267;
signed char var_20 = (signed char)65;
unsigned int var_21 = 3356305087U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
