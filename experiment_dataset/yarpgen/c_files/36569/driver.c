#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_4 = (unsigned char)229;
unsigned int var_5 = 3060433373U;
unsigned long long int var_10 = 8096482294820385569ULL;
int zero = 0;
unsigned long long int var_12 = 18046215140742991013ULL;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-1695;
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
