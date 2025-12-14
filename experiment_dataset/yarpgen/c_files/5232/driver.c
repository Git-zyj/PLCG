#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 16376268277693005314ULL;
unsigned short var_4 = (unsigned short)61424;
_Bool var_7 = (_Bool)1;
int var_9 = -954406491;
short var_11 = (short)24637;
int zero = 0;
unsigned int var_14 = 1221745668U;
unsigned short var_15 = (unsigned short)3653;
unsigned long long int var_16 = 1975317921938171781ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
