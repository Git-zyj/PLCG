#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1859947167935964870ULL;
unsigned char var_1 = (unsigned char)230;
signed char var_6 = (signed char)51;
unsigned char var_9 = (unsigned char)19;
long long int var_10 = -9018530476859363314LL;
unsigned int var_12 = 93909550U;
unsigned char var_13 = (unsigned char)234;
unsigned char var_16 = (unsigned char)81;
int zero = 0;
unsigned long long int var_17 = 11967786584585437306ULL;
unsigned char var_18 = (unsigned char)60;
unsigned long long int var_19 = 15940889032542984083ULL;
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
