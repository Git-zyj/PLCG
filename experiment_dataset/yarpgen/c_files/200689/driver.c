#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-17;
unsigned short var_1 = (unsigned short)4038;
unsigned long long int var_3 = 12032328456943944371ULL;
short var_4 = (short)-12408;
int var_5 = -405389677;
long long int var_7 = -3452300675503894654LL;
unsigned char var_8 = (unsigned char)241;
int var_12 = 1312561986;
int zero = 0;
unsigned int var_14 = 416449338U;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-47;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
