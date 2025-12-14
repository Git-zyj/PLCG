#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)248;
_Bool var_1 = (_Bool)0;
unsigned long long int var_3 = 1839518805925061669ULL;
signed char var_4 = (signed char)-97;
signed char var_5 = (signed char)-15;
int var_6 = -1814446642;
unsigned long long int var_7 = 10897746169594717973ULL;
unsigned char var_10 = (unsigned char)118;
signed char var_11 = (signed char)-115;
signed char var_12 = (signed char)111;
unsigned char var_13 = (unsigned char)214;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 2780502586927450274ULL;
int zero = 0;
unsigned long long int var_17 = 68802179177611251ULL;
unsigned long long int var_18 = 736106618393969502ULL;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)55;
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
