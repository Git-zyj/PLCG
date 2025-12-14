#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14942;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)37;
signed char var_3 = (signed char)74;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)-110;
unsigned char var_6 = (unsigned char)188;
_Bool var_8 = (_Bool)0;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
unsigned char var_13 = (unsigned char)5;
int var_16 = -174282212;
int zero = 0;
unsigned int var_17 = 1336038286U;
signed char var_18 = (signed char)-42;
unsigned short var_19 = (unsigned short)44650;
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
