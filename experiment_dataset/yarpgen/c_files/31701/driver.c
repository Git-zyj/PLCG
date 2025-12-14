#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14092486640875275879ULL;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)-65;
unsigned short var_5 = (unsigned short)51549;
short var_7 = (short)-5287;
unsigned short var_10 = (unsigned short)38166;
int var_11 = 2125029742;
unsigned short var_12 = (unsigned short)44919;
unsigned long long int var_13 = 16270975762842610504ULL;
int var_15 = 639097934;
int zero = 0;
unsigned int var_18 = 171076092U;
unsigned char var_19 = (unsigned char)128;
signed char var_20 = (signed char)89;
void init() {
}

void checksum() {
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
