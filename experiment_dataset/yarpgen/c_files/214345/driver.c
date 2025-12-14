#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6003017608968087244LL;
_Bool var_3 = (_Bool)1;
unsigned long long int var_7 = 12127731119530778917ULL;
int var_17 = 1226074790;
int zero = 0;
unsigned short var_19 = (unsigned short)38259;
unsigned long long int var_20 = 7882472384484571572ULL;
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
