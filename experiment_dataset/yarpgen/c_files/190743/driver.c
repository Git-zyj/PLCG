#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 2345048868U;
int var_9 = -1007184255;
unsigned long long int var_10 = 11458895377377322876ULL;
int var_12 = 188937357;
int zero = 0;
unsigned short var_13 = (unsigned short)23864;
unsigned char var_14 = (unsigned char)217;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
