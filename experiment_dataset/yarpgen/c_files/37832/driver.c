#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)19;
unsigned int var_2 = 1201663727U;
unsigned long long int var_4 = 2944481313540399991ULL;
unsigned long long int var_6 = 8897609453459816942ULL;
short var_8 = (short)8080;
unsigned short var_13 = (unsigned short)39644;
unsigned int var_14 = 2309776835U;
unsigned long long int var_15 = 6041123981432552269ULL;
unsigned long long int var_16 = 16479827092663858589ULL;
int zero = 0;
unsigned long long int var_17 = 12631625216910554174ULL;
_Bool var_18 = (_Bool)1;
int var_19 = 344828465;
int var_20 = -1788449551;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
