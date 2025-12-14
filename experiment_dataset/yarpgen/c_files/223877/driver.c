#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8333827014888378340ULL;
int var_2 = -900774922;
unsigned char var_4 = (unsigned char)81;
_Bool var_6 = (_Bool)0;
int var_8 = 1889356756;
unsigned short var_16 = (unsigned short)22147;
int zero = 0;
int var_17 = -53011338;
unsigned char var_18 = (unsigned char)134;
unsigned long long int var_19 = 15750514629181386415ULL;
unsigned int var_20 = 1233476481U;
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
