#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2341;
_Bool var_1 = (_Bool)0;
int var_2 = -1259377901;
unsigned short var_3 = (unsigned short)45577;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 10793409715196549622ULL;
int var_6 = 389377452;
signed char var_7 = (signed char)-35;
unsigned short var_8 = (unsigned short)18943;
unsigned short var_9 = (unsigned short)32192;
unsigned long long int var_10 = 6033644775392673181ULL;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 1248410894U;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 2601009124U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
