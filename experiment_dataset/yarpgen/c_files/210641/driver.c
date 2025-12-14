#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)206;
unsigned int var_10 = 1201329025U;
signed char var_13 = (signed char)96;
unsigned long long int var_14 = 6990736878634170014ULL;
unsigned long long int var_16 = 9091812602515262286ULL;
signed char var_17 = (signed char)12;
int zero = 0;
unsigned short var_18 = (unsigned short)36182;
int var_19 = -608797547;
int var_20 = 1023823141;
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
