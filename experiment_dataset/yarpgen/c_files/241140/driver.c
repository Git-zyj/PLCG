#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16471683926049174890ULL;
unsigned short var_8 = (unsigned short)44207;
unsigned long long int var_13 = 15810374208124550909ULL;
int zero = 0;
signed char var_15 = (signed char)-32;
signed char var_16 = (signed char)-113;
unsigned short var_17 = (unsigned short)45635;
int var_18 = 1690412756;
unsigned int var_19 = 635155538U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
