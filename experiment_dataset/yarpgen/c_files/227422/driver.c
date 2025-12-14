#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)38296;
short var_10 = (short)-2132;
short var_11 = (short)11051;
unsigned long long int var_13 = 15658990361437735974ULL;
unsigned long long int var_15 = 8578162853177544256ULL;
int zero = 0;
short var_16 = (short)-21350;
unsigned long long int var_17 = 6879628955851538130ULL;
void init() {
}

void checksum() {
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
