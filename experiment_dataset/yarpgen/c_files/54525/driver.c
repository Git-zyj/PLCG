#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32317;
int var_1 = 352981796;
unsigned char var_3 = (unsigned char)76;
unsigned char var_5 = (unsigned char)119;
_Bool var_9 = (_Bool)1;
long long int var_10 = -6669353710024298490LL;
unsigned char var_11 = (unsigned char)43;
unsigned short var_13 = (unsigned short)38690;
int zero = 0;
unsigned int var_14 = 2568835321U;
signed char var_15 = (signed char)61;
unsigned long long int var_16 = 11884392491488779922ULL;
unsigned char var_17 = (unsigned char)214;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
