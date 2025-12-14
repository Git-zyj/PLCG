#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)161;
short var_5 = (short)22460;
signed char var_6 = (signed char)87;
unsigned char var_8 = (unsigned char)45;
unsigned long long int var_10 = 5419105264314927630ULL;
unsigned short var_11 = (unsigned short)54905;
unsigned int var_12 = 2918298952U;
int zero = 0;
int var_13 = -2031581433;
unsigned long long int var_14 = 2822675477695326397ULL;
unsigned int var_15 = 4098819645U;
int var_16 = 181465090;
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
