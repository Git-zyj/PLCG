#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)27;
unsigned int var_4 = 1827408085U;
long long int var_5 = -6734920051920241910LL;
short var_6 = (short)-27338;
_Bool var_8 = (_Bool)1;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-2043;
int zero = 0;
long long int var_15 = -6681354495737429824LL;
unsigned char var_16 = (unsigned char)211;
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
