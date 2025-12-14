#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6971749361598386453LL;
int var_8 = -1612851914;
unsigned short var_12 = (unsigned short)34195;
unsigned int var_14 = 636065492U;
unsigned short var_16 = (unsigned short)47755;
unsigned short var_18 = (unsigned short)16481;
int zero = 0;
unsigned long long int var_19 = 487786690060186454ULL;
unsigned char var_20 = (unsigned char)146;
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
