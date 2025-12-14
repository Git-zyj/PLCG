#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3474400584330174824LL;
int var_8 = -114215121;
long long int var_11 = -7250992618556159986LL;
unsigned short var_12 = (unsigned short)30839;
short var_13 = (short)-29985;
short var_16 = (short)-8254;
unsigned int var_17 = 1623781721U;
int zero = 0;
unsigned long long int var_20 = 17314397421863068069ULL;
long long int var_21 = 8219775163312998239LL;
unsigned char var_22 = (unsigned char)25;
unsigned long long int var_23 = 14548618930520480288ULL;
int var_24 = -951904217;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
