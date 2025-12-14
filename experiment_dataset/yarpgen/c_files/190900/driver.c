#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 588277737;
unsigned long long int var_2 = 16386087644381771058ULL;
signed char var_3 = (signed char)107;
int var_4 = -409614613;
unsigned long long int var_5 = 13873818907867062032ULL;
signed char var_7 = (signed char)-119;
unsigned int var_8 = 1139075771U;
unsigned char var_9 = (unsigned char)197;
unsigned short var_11 = (unsigned short)6669;
unsigned long long int var_12 = 17820706345473118931ULL;
unsigned int var_14 = 415848746U;
_Bool var_15 = (_Bool)0;
unsigned int var_17 = 2570648771U;
int zero = 0;
unsigned char var_18 = (unsigned char)235;
signed char var_19 = (signed char)-89;
signed char var_20 = (signed char)14;
signed char var_21 = (signed char)-35;
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
