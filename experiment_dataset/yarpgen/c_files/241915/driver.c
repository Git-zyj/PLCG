#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)253;
long long int var_4 = -1061174466339033990LL;
unsigned short var_8 = (unsigned short)49678;
int zero = 0;
unsigned long long int var_13 = 7826468595261784935ULL;
unsigned int var_14 = 3083346349U;
void init() {
}

void checksum() {
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
