#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)61055;
unsigned long long int var_11 = 7968772168195911878ULL;
unsigned short var_16 = (unsigned short)18424;
unsigned int var_17 = 4014255647U;
short var_18 = (short)-3950;
int zero = 0;
long long int var_20 = -8872804759173633539LL;
int var_21 = 683941394;
unsigned char var_22 = (unsigned char)185;
short var_23 = (short)15829;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
