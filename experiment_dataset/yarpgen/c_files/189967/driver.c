#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15954840711876593663ULL;
long long int var_4 = 6660290058251404725LL;
unsigned int var_5 = 3635718550U;
long long int var_8 = 5039079359770341362LL;
unsigned short var_9 = (unsigned short)33537;
unsigned short var_10 = (unsigned short)41253;
int zero = 0;
unsigned int var_16 = 1215522108U;
signed char var_17 = (signed char)-28;
unsigned short var_18 = (unsigned short)355;
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
