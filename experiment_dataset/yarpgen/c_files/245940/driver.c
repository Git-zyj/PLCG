#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2584;
unsigned long long int var_4 = 5388382894420814400ULL;
_Bool var_9 = (_Bool)0;
short var_10 = (short)13368;
unsigned long long int var_11 = 5568814341642203465ULL;
int zero = 0;
short var_20 = (short)-31345;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 8430017969326762115ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
