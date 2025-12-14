#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)33;
short var_2 = (short)1465;
signed char var_5 = (signed char)15;
short var_6 = (short)16735;
unsigned char var_7 = (unsigned char)105;
unsigned char var_8 = (unsigned char)66;
signed char var_9 = (signed char)-24;
unsigned char var_11 = (unsigned char)3;
long long int var_12 = -7719474301976514263LL;
short var_13 = (short)-1148;
long long int var_14 = 8451948020344693145LL;
short var_15 = (short)-32643;
unsigned long long int var_16 = 3364118756378764527ULL;
int zero = 0;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)124;
unsigned long long int var_19 = 11034424826672050862ULL;
signed char var_20 = (signed char)-10;
void init() {
}

void checksum() {
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
