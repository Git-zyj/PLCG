#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1492710323;
unsigned long long int var_3 = 11119682559329026432ULL;
short var_4 = (short)20608;
unsigned char var_5 = (unsigned char)208;
int var_6 = -2042604786;
short var_7 = (short)-18488;
unsigned long long int var_8 = 4488691701539535884ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)25648;
unsigned short var_13 = (unsigned short)2464;
int var_14 = -2045310733;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
