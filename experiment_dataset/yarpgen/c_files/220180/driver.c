#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned long long int var_8 = 2606715646301552556ULL;
unsigned int var_11 = 3850358196U;
int zero = 0;
short var_14 = (short)4745;
unsigned int var_15 = 913865072U;
unsigned long long int var_16 = 8528280541519791470ULL;
int var_17 = 886618294;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
