#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1246324143;
int var_6 = 1954691601;
unsigned char var_7 = (unsigned char)106;
unsigned short var_11 = (unsigned short)436;
unsigned short var_14 = (unsigned short)4867;
unsigned short var_15 = (unsigned short)14599;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = -686166576;
int var_19 = -1319055398;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
