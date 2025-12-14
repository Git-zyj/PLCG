#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -392722408724664150LL;
unsigned char var_1 = (unsigned char)96;
short var_2 = (short)-28382;
unsigned char var_3 = (unsigned char)85;
unsigned short var_4 = (unsigned short)15598;
short var_5 = (short)5173;
unsigned char var_6 = (unsigned char)118;
unsigned char var_7 = (unsigned char)190;
unsigned char var_8 = (unsigned char)144;
int var_11 = 259181113;
unsigned char var_12 = (unsigned char)159;
signed char var_14 = (signed char)-24;
int zero = 0;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 10221291960943222222ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
