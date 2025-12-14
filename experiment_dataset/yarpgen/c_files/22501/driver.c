#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)31;
unsigned long long int var_10 = 2408223912559748567ULL;
unsigned char var_16 = (unsigned char)211;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)41775;
unsigned int var_20 = 1965886856U;
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
