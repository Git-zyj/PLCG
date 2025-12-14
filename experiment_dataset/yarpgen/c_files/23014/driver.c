#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1596;
long long int var_6 = -8317172063777871908LL;
unsigned long long int var_11 = 7067110954292141640ULL;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 18325959429947593488ULL;
unsigned int var_15 = 962612505U;
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
