#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)23;
unsigned long long int var_3 = 9503502134223361979ULL;
long long int var_4 = -1460945047613626013LL;
short var_8 = (short)20935;
unsigned char var_9 = (unsigned char)173;
unsigned short var_10 = (unsigned short)49063;
short var_11 = (short)1395;
int zero = 0;
unsigned short var_14 = (unsigned short)9362;
long long int var_15 = 4871195011877423576LL;
short var_16 = (short)299;
short var_17 = (short)-3862;
unsigned char var_18 = (unsigned char)129;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
