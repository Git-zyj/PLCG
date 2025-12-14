#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)29264;
signed char var_12 = (signed char)-104;
short var_13 = (short)27725;
int zero = 0;
unsigned long long int var_15 = 7224501421971618890ULL;
short var_16 = (short)16487;
unsigned int var_17 = 797509121U;
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
