#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7057032530769004557ULL;
signed char var_8 = (signed char)-117;
unsigned int var_9 = 2118993928U;
short var_12 = (short)2573;
unsigned char var_13 = (unsigned char)175;
int zero = 0;
int var_16 = 216970688;
long long int var_17 = 7970135483397549536LL;
long long int var_18 = -1135801232829518363LL;
short var_19 = (short)30350;
short var_20 = (short)-18927;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
