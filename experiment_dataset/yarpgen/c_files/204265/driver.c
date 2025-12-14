#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1498632016;
int var_5 = 137220919;
unsigned short var_6 = (unsigned short)5155;
short var_7 = (short)10348;
int zero = 0;
unsigned short var_12 = (unsigned short)39144;
unsigned int var_13 = 669534333U;
long long int var_14 = -2284919441440942037LL;
signed char var_15 = (signed char)19;
unsigned long long int var_16 = 16346626900229719267ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
