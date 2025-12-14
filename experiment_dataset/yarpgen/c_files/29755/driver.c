#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3190047470U;
long long int var_5 = 3129835049642358106LL;
_Bool var_8 = (_Bool)1;
long long int var_11 = -1973894630929095075LL;
_Bool var_12 = (_Bool)1;
int var_15 = -1056498366;
int zero = 0;
unsigned short var_17 = (unsigned short)32653;
unsigned long long int var_18 = 8731937491708192235ULL;
void init() {
}

void checksum() {
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
