#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_4 = (short)-7492;
unsigned char var_7 = (unsigned char)224;
unsigned long long int var_11 = 2502687924690690545ULL;
unsigned int var_12 = 4065039662U;
int var_14 = 865157861;
unsigned char var_15 = (unsigned char)179;
unsigned long long int var_18 = 5074488513283343979ULL;
int zero = 0;
unsigned long long int var_20 = 16339832452145086352ULL;
unsigned short var_21 = (unsigned short)24320;
short var_22 = (short)9290;
long long int var_23 = 7206940081268072248LL;
unsigned long long int var_24 = 18359638490597467937ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
