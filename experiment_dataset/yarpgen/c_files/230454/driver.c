#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 257830267U;
long long int var_7 = -441370434146772641LL;
unsigned int var_8 = 2424908955U;
long long int var_16 = -1508844173759589448LL;
int zero = 0;
long long int var_19 = 5251449391443873336LL;
unsigned int var_20 = 1216465784U;
void init() {
}

void checksum() {
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
