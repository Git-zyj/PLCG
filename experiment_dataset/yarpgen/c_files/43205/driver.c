#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 94593557;
_Bool var_2 = (_Bool)0;
unsigned short var_9 = (unsigned short)33618;
int var_12 = -35246751;
unsigned short var_13 = (unsigned short)62320;
unsigned int var_15 = 1089832635U;
int zero = 0;
unsigned short var_16 = (unsigned short)26653;
unsigned long long int var_17 = 3011827397293188443ULL;
_Bool var_18 = (_Bool)1;
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
