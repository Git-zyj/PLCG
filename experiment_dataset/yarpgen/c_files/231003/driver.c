#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)97;
int var_12 = -1158196763;
unsigned int var_14 = 2865069389U;
unsigned short var_16 = (unsigned short)32365;
long long int var_17 = 9155330992674150280LL;
int zero = 0;
unsigned char var_19 = (unsigned char)150;
long long int var_20 = -5481964350898534106LL;
unsigned char var_21 = (unsigned char)156;
unsigned long long int var_22 = 13487208603166783156ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
