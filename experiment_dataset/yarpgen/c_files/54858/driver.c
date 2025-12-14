#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)40;
unsigned long long int var_2 = 8687617225999389943ULL;
unsigned char var_4 = (unsigned char)178;
int var_5 = 841039363;
_Bool var_8 = (_Bool)1;
short var_11 = (short)-4372;
int zero = 0;
unsigned long long int var_13 = 14599730846662542943ULL;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)9535;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
