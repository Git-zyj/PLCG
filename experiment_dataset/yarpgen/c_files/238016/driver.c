#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2492806489512940611LL;
_Bool var_1 = (_Bool)1;
long long int var_4 = 2270506237838650944LL;
signed char var_5 = (signed char)9;
unsigned char var_10 = (unsigned char)113;
signed char var_11 = (signed char)117;
int zero = 0;
unsigned long long int var_16 = 16068454255398613814ULL;
long long int var_17 = -3443394786480215511LL;
int var_18 = 178121252;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
