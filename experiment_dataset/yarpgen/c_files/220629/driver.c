#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2197081968682607778LL;
_Bool var_3 = (_Bool)1;
long long int var_7 = 8351726640356999964LL;
_Bool var_8 = (_Bool)1;
int zero = 0;
long long int var_13 = -6922228546198999120LL;
unsigned short var_14 = (unsigned short)5389;
unsigned short var_15 = (unsigned short)45055;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
