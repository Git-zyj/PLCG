#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-98;
unsigned char var_4 = (unsigned char)34;
signed char var_5 = (signed char)6;
long long int var_9 = -5447083290652387991LL;
signed char var_14 = (signed char)-98;
int zero = 0;
signed char var_16 = (signed char)15;
short var_17 = (short)-11433;
unsigned int var_18 = 2419783646U;
void init() {
}

void checksum() {
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
