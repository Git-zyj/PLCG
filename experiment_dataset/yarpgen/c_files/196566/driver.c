#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-108;
unsigned int var_3 = 303469588U;
unsigned short var_8 = (unsigned short)52392;
unsigned int var_11 = 651279653U;
unsigned int var_12 = 2263545137U;
int zero = 0;
short var_18 = (short)16074;
unsigned long long int var_19 = 9413948847234866862ULL;
unsigned int var_20 = 4251245539U;
void init() {
}

void checksum() {
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
