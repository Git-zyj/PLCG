#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_5 = -5264566258268179456LL;
unsigned long long int var_11 = 1614231191018987063ULL;
int zero = 0;
unsigned long long int var_14 = 3388303219681934932ULL;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)132;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
