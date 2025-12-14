#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_3 = 2067778300U;
unsigned long long int var_11 = 7180110383216463990ULL;
int var_14 = 991091111;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 1019277082121622395ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)59968;
unsigned char var_20 = (unsigned char)162;
void init() {
}

void checksum() {
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
