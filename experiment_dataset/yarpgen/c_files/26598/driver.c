#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3541529893U;
unsigned char var_1 = (unsigned char)73;
unsigned int var_6 = 460362959U;
unsigned short var_7 = (unsigned short)50528;
_Bool var_15 = (_Bool)0;
long long int var_17 = -2561601186690929895LL;
unsigned long long int var_18 = 7576412216467254989ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)1;
unsigned int var_21 = 2174546123U;
int var_22 = 1383975673;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
