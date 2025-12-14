#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2281414716706731786LL;
unsigned int var_2 = 2488147052U;
unsigned int var_3 = 4015983192U;
unsigned int var_4 = 3441115820U;
unsigned char var_7 = (unsigned char)231;
int var_8 = 454746384;
unsigned int var_10 = 1450212109U;
unsigned long long int var_11 = 2271117997499668321ULL;
int zero = 0;
unsigned long long int var_12 = 14866425039765847114ULL;
unsigned char var_13 = (unsigned char)130;
unsigned long long int var_14 = 3805391719444209910ULL;
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
