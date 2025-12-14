#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -734494353;
unsigned long long int var_5 = 11310742164808225312ULL;
signed char var_7 = (signed char)-114;
unsigned char var_8 = (unsigned char)180;
int zero = 0;
short var_10 = (short)-26223;
long long int var_11 = 8932777354970700943LL;
unsigned long long int var_12 = 882617702972918045ULL;
short var_13 = (short)-22603;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
