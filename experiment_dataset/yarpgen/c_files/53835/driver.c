#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)155;
unsigned char var_1 = (unsigned char)254;
signed char var_3 = (signed char)-4;
unsigned long long int var_5 = 11058675648107237991ULL;
signed char var_6 = (signed char)-6;
long long int var_10 = 1977299762183809810LL;
short var_13 = (short)25684;
int zero = 0;
signed char var_15 = (signed char)-96;
_Bool var_16 = (_Bool)0;
long long int var_17 = 3147931715245095736LL;
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
