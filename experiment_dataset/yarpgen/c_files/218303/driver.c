#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)50;
signed char var_11 = (signed char)-78;
unsigned long long int var_16 = 7672594412729457704ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)9971;
signed char var_19 = (signed char)113;
unsigned long long int var_20 = 4020152619026007816ULL;
void init() {
}

void checksum() {
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
