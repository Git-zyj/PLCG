#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3960822093U;
int var_1 = -917783113;
long long int var_3 = -4169551033106923697LL;
unsigned char var_4 = (unsigned char)60;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
unsigned short var_13 = (unsigned short)57391;
short var_15 = (short)6808;
unsigned long long int var_16 = 16247723002523881850ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)8102;
short var_18 = (short)4184;
int var_19 = 11804028;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
