#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58207;
unsigned short var_2 = (unsigned short)50300;
long long int var_8 = -9143329305148868387LL;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 18376700575633259022ULL;
long long int var_13 = -1161151869881235075LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
