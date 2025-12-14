#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)58153;
unsigned int var_4 = 3566615661U;
unsigned long long int var_6 = 7116924351731434121ULL;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)23898;
int zero = 0;
unsigned int var_10 = 2970020769U;
unsigned short var_11 = (unsigned short)29713;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
