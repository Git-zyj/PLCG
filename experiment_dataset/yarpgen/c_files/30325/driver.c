#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1041769495;
int var_5 = 485546151;
short var_8 = (short)124;
unsigned int var_10 = 1909560201U;
unsigned long long int var_11 = 10398478467136369635ULL;
int var_12 = -1765636197;
int zero = 0;
unsigned short var_17 = (unsigned short)9898;
unsigned long long int var_18 = 6270607780074971982ULL;
void init() {
}

void checksum() {
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
