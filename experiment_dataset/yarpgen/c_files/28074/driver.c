#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 827197074U;
unsigned long long int var_5 = 15276683665947510328ULL;
unsigned int var_6 = 423347511U;
unsigned int var_8 = 457439326U;
unsigned long long int var_10 = 8260010314617980004ULL;
unsigned long long int var_15 = 3812298022302003060ULL;
unsigned int var_16 = 199619666U;
unsigned long long int var_17 = 6796560432071270770ULL;
int zero = 0;
unsigned long long int var_20 = 1351634106840563668ULL;
unsigned int var_21 = 429111349U;
unsigned long long int var_22 = 5594304009051113566ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
