#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12056795313046676598ULL;
long long int var_10 = -2098264057959125131LL;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 58432398U;
unsigned long long int var_14 = 8458682230543499660ULL;
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
