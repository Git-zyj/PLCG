#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 5828635075223396534ULL;
short var_4 = (short)4441;
unsigned short var_6 = (unsigned short)48107;
unsigned long long int var_15 = 9905375108976563946ULL;
_Bool var_16 = (_Bool)1;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 315881879U;
int var_21 = 2127194965;
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
