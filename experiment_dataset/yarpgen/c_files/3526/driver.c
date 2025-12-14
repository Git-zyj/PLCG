#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5017911349108044523LL;
unsigned char var_5 = (unsigned char)15;
int var_6 = 661714039;
unsigned int var_7 = 1968782695U;
unsigned char var_10 = (unsigned char)213;
unsigned int var_11 = 1694391784U;
unsigned long long int var_14 = 10653004318541899728ULL;
int zero = 0;
long long int var_17 = 4559724364085359407LL;
signed char var_18 = (signed char)86;
unsigned char var_19 = (unsigned char)105;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
