#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11210177802738739729ULL;
unsigned long long int var_2 = 8667998785297570291ULL;
signed char var_3 = (signed char)-109;
_Bool var_4 = (_Bool)1;
signed char var_6 = (signed char)54;
signed char var_7 = (signed char)120;
unsigned int var_8 = 2901356164U;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)-12;
unsigned short var_12 = (unsigned short)1208;
signed char var_13 = (signed char)90;
unsigned int var_14 = 3258553660U;
unsigned short var_15 = (unsigned short)3649;
unsigned char var_17 = (unsigned char)156;
int zero = 0;
short var_18 = (short)10452;
unsigned int var_19 = 1396423391U;
unsigned int var_20 = 1278701506U;
unsigned int var_21 = 864969333U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
