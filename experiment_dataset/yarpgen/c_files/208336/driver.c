#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)71;
long long int var_2 = 7100929330970301365LL;
long long int var_7 = 740382344195036800LL;
unsigned char var_8 = (unsigned char)116;
unsigned int var_11 = 138147830U;
int var_19 = -242010248;
int zero = 0;
unsigned long long int var_20 = 11065698403695918624ULL;
unsigned short var_21 = (unsigned short)12062;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
