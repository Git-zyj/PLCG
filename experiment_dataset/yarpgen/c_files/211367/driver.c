#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 8956826769022005471ULL;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)53;
signed char var_8 = (signed char)82;
int zero = 0;
long long int var_10 = -5048183012332785385LL;
int var_11 = -253350578;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
