#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_11 = (unsigned short)25770;
unsigned char var_14 = (unsigned char)140;
int zero = 0;
unsigned long long int var_19 = 15632772898516018090ULL;
unsigned long long int var_20 = 9757076812039992903ULL;
int var_21 = -1623001859;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
