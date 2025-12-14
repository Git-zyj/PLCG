#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3282474688190300424LL;
unsigned short var_8 = (unsigned short)38868;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)42901;
int zero = 0;
unsigned long long int var_16 = 12220378851326123843ULL;
unsigned char var_17 = (unsigned char)121;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
