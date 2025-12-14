#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8777318374523511916ULL;
unsigned char var_1 = (unsigned char)199;
unsigned int var_2 = 3278565500U;
long long int var_3 = -5967682518899510266LL;
unsigned long long int var_5 = 3752752863746355888ULL;
int zero = 0;
int var_14 = -1425525071;
long long int var_15 = 4880856646861534420LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
