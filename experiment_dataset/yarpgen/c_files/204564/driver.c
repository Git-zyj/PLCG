#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4346565486058538822LL;
long long int var_3 = -5333966039236093686LL;
long long int var_4 = -326805146444684761LL;
unsigned char var_6 = (unsigned char)191;
unsigned short var_8 = (unsigned short)29297;
int zero = 0;
long long int var_10 = 5321147200532788471LL;
int var_11 = 1338367711;
long long int var_12 = 4717468534213589964LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
