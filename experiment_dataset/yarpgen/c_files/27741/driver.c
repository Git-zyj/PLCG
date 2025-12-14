#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5943735351998252945LL;
signed char var_4 = (signed char)93;
unsigned int var_6 = 308898907U;
unsigned char var_8 = (unsigned char)176;
unsigned long long int var_10 = 17935033696688546980ULL;
unsigned short var_14 = (unsigned short)42184;
int zero = 0;
unsigned short var_16 = (unsigned short)5833;
unsigned char var_17 = (unsigned char)6;
unsigned long long int var_18 = 685307712959558731ULL;
long long int var_19 = -2246955486556270960LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
