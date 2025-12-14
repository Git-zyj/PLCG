#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-6019;
unsigned long long int var_2 = 211158909518901700ULL;
unsigned int var_8 = 2427398673U;
long long int var_12 = -2333241944336624614LL;
unsigned short var_14 = (unsigned short)1196;
int zero = 0;
int var_17 = 367159571;
unsigned char var_18 = (unsigned char)59;
long long int var_19 = 6650457527037269537LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
