#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)37339;
unsigned int var_2 = 1256378403U;
unsigned short var_3 = (unsigned short)22070;
long long int var_8 = 2038074106885031224LL;
unsigned long long int var_11 = 17437921114579583862ULL;
int zero = 0;
unsigned long long int var_12 = 285596271401442030ULL;
signed char var_13 = (signed char)93;
unsigned long long int var_14 = 12068514354948827995ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
