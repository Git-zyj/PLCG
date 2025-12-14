#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1773787636U;
signed char var_3 = (signed char)-94;
signed char var_9 = (signed char)-125;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 11588248497662822583ULL;
unsigned short var_18 = (unsigned short)45024;
unsigned short var_19 = (unsigned short)30388;
void init() {
}

void checksum() {
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
