#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3584397996751363568ULL;
signed char var_3 = (signed char)-99;
signed char var_4 = (signed char)-114;
long long int var_6 = 2263320856168374500LL;
unsigned short var_8 = (unsigned short)19505;
int var_9 = -1223491150;
int zero = 0;
int var_14 = -1631149976;
unsigned char var_15 = (unsigned char)120;
unsigned short var_16 = (unsigned short)17454;
signed char var_17 = (signed char)-38;
signed char var_18 = (signed char)-117;
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
