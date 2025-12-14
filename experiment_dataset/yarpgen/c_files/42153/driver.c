#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4622361930805057322LL;
signed char var_5 = (signed char)124;
unsigned char var_6 = (unsigned char)141;
unsigned char var_7 = (unsigned char)25;
unsigned long long int var_10 = 14559965312116690691ULL;
int var_11 = 624030707;
int zero = 0;
unsigned long long int var_12 = 8723813103942222963ULL;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 10239656739664567784ULL;
unsigned char var_15 = (unsigned char)113;
unsigned int var_16 = 1931642802U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
