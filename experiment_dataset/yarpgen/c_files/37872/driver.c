#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)92;
unsigned char var_9 = (unsigned char)195;
unsigned char var_11 = (unsigned char)81;
unsigned long long int var_12 = 15875236425266462975ULL;
int zero = 0;
unsigned int var_14 = 2097330154U;
unsigned long long int var_15 = 1734999526316833517ULL;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
