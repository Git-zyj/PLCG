#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 383063499U;
unsigned long long int var_2 = 8762073530884007826ULL;
unsigned long long int var_3 = 12567898460559733334ULL;
unsigned int var_4 = 1951124280U;
unsigned long long int var_6 = 10105623214812894903ULL;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 2268225149U;
int zero = 0;
unsigned char var_13 = (unsigned char)76;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)7;
unsigned int var_16 = 3810273529U;
void init() {
}

void checksum() {
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
