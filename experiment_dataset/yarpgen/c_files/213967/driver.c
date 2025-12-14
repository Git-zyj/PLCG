#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-8721;
unsigned int var_9 = 3760672876U;
unsigned short var_12 = (unsigned short)39098;
unsigned long long int var_16 = 12366048529784719816ULL;
int zero = 0;
long long int var_19 = -3226180295483142667LL;
long long int var_20 = 8030696348859950819LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
