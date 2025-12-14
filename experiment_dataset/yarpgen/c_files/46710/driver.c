#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28814;
unsigned long long int var_3 = 8075179154546818297ULL;
unsigned long long int var_7 = 13480624759579246430ULL;
int var_9 = -2006969692;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_15 = -799467587986438850LL;
short var_16 = (short)-24019;
void init() {
}

void checksum() {
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
