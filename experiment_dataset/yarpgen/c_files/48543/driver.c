#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25121;
unsigned long long int var_4 = 14952498010995027015ULL;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned char var_16 = (unsigned char)132;
unsigned char var_17 = (unsigned char)39;
unsigned long long int var_18 = 14970118903317613151ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
