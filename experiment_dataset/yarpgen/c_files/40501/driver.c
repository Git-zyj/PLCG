#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)34153;
unsigned long long int var_6 = 18067316169692737484ULL;
long long int var_8 = -8180106577876613205LL;
int zero = 0;
unsigned long long int var_10 = 15883365493884889486ULL;
long long int var_11 = 8074932756255141850LL;
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
