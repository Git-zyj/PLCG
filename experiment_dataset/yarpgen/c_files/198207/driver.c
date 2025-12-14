#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56756;
unsigned short var_1 = (unsigned short)22104;
unsigned short var_5 = (unsigned short)55165;
unsigned short var_6 = (unsigned short)38956;
unsigned short var_7 = (unsigned short)32187;
unsigned short var_8 = (unsigned short)2549;
unsigned short var_12 = (unsigned short)14219;
int zero = 0;
unsigned short var_13 = (unsigned short)7503;
unsigned short var_14 = (unsigned short)60152;
unsigned short var_15 = (unsigned short)37431;
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
