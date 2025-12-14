#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1430445576;
unsigned long long int var_3 = 9713064113338394660ULL;
unsigned int var_8 = 347497187U;
short var_10 = (short)-18344;
int var_11 = -1914577331;
unsigned int var_14 = 4121915719U;
long long int var_15 = 6454162867927868663LL;
int zero = 0;
signed char var_17 = (signed char)-16;
unsigned short var_18 = (unsigned short)36354;
void init() {
}

void checksum() {
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
