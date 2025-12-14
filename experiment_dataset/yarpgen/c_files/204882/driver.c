#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1619385506;
_Bool var_6 = (_Bool)0;
unsigned char var_10 = (unsigned char)18;
unsigned char var_11 = (unsigned char)45;
unsigned long long int var_12 = 14646015526493412778ULL;
int var_13 = 818664393;
unsigned short var_14 = (unsigned short)2117;
int zero = 0;
unsigned int var_16 = 2101944966U;
unsigned int var_17 = 2325514929U;
void init() {
}

void checksum() {
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
