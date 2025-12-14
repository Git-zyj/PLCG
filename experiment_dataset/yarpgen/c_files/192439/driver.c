#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)17385;
_Bool var_6 = (_Bool)0;
long long int var_7 = -1746034345999074211LL;
short var_13 = (short)7246;
unsigned short var_17 = (unsigned short)10924;
int zero = 0;
unsigned int var_19 = 75410490U;
unsigned long long int var_20 = 3478817743409176361ULL;
long long int var_21 = -3690166185106136523LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
