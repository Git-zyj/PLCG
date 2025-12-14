#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)62275;
long long int var_5 = 8861058756351799705LL;
unsigned long long int var_6 = 14983250265467470112ULL;
int var_7 = 968241306;
signed char var_10 = (signed char)28;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 299495258U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
