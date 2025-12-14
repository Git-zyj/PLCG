#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3650;
short var_1 = (short)23835;
_Bool var_2 = (_Bool)0;
unsigned char var_6 = (unsigned char)158;
unsigned long long int var_12 = 5294746115515224982ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)119;
unsigned long long int var_14 = 8839905664613147943ULL;
unsigned char var_15 = (unsigned char)162;
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
