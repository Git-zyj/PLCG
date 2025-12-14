#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1104095935U;
long long int var_5 = -1395636102439598543LL;
unsigned long long int var_6 = 5793975894744968023ULL;
unsigned char var_10 = (unsigned char)142;
unsigned long long int var_14 = 3905800065450868204ULL;
long long int var_16 = -3286220567420638369LL;
short var_18 = (short)-20329;
int zero = 0;
unsigned char var_20 = (unsigned char)35;
int var_21 = 54603900;
unsigned short var_22 = (unsigned short)7033;
long long int var_23 = 6920773083023280500LL;
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
