#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)4878;
long long int var_8 = -2686789584453981854LL;
unsigned int var_10 = 4232135187U;
int zero = 0;
unsigned long long int var_15 = 12489731362544123530ULL;
int var_16 = -1362189609;
unsigned short var_17 = (unsigned short)47217;
void init() {
}

void checksum() {
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
