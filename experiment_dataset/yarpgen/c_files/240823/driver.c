#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)162;
long long int var_9 = 1910330014246946365LL;
int var_10 = -1135106713;
unsigned char var_11 = (unsigned char)253;
unsigned short var_12 = (unsigned short)55735;
short var_13 = (short)-15229;
unsigned char var_14 = (unsigned char)133;
unsigned short var_15 = (unsigned short)7615;
int zero = 0;
signed char var_16 = (signed char)-25;
unsigned short var_17 = (unsigned short)3570;
signed char var_18 = (signed char)(-127 - 1);
short var_19 = (short)-11756;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
