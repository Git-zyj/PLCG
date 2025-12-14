#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)88;
unsigned char var_2 = (unsigned char)94;
long long int var_3 = -7886919931437535295LL;
unsigned long long int var_4 = 2032458571258332108ULL;
_Bool var_6 = (_Bool)1;
unsigned char var_8 = (unsigned char)224;
unsigned char var_9 = (unsigned char)128;
unsigned char var_10 = (unsigned char)242;
int zero = 0;
long long int var_18 = -8011324097606007580LL;
unsigned char var_19 = (unsigned char)241;
unsigned long long int var_20 = 1671043051871413945ULL;
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
