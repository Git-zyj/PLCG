#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)128;
signed char var_4 = (signed char)-40;
_Bool var_6 = (_Bool)1;
long long int var_9 = 8262199161832359560LL;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 914473411846602050ULL;
unsigned int var_15 = 1753694334U;
int zero = 0;
unsigned long long int var_16 = 16354164539280761081ULL;
int var_17 = 1488679719;
unsigned long long int var_18 = 11446506729486760970ULL;
short var_19 = (short)26614;
unsigned int var_20 = 6630325U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
