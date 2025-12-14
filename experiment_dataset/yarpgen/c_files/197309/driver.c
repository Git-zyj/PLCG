#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1774909459;
unsigned short var_1 = (unsigned short)28943;
signed char var_2 = (signed char)56;
int var_3 = -1872351378;
signed char var_4 = (signed char)101;
short var_5 = (short)-12491;
signed char var_6 = (signed char)-97;
long long int var_7 = -328979128925051889LL;
_Bool var_8 = (_Bool)1;
long long int var_9 = -489517053825724013LL;
int var_11 = 418356567;
short var_12 = (short)15658;
unsigned short var_13 = (unsigned short)65458;
int zero = 0;
int var_14 = -1594278720;
unsigned long long int var_15 = 16669861949738605114ULL;
unsigned long long int var_16 = 15286321286471882262ULL;
unsigned char var_17 = (unsigned char)89;
unsigned short var_18 = (unsigned short)41601;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
