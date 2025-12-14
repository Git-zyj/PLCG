#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18198428004913981899ULL;
short var_3 = (short)27999;
unsigned int var_4 = 3459372155U;
unsigned int var_5 = 1033016783U;
unsigned short var_9 = (unsigned short)4380;
int zero = 0;
signed char var_12 = (signed char)8;
unsigned short var_13 = (unsigned short)43973;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
