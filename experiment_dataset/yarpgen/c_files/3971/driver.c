#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12740765601774880025ULL;
unsigned short var_4 = (unsigned short)56711;
unsigned char var_11 = (unsigned char)91;
long long int var_12 = 5510311929255015767LL;
unsigned short var_13 = (unsigned short)53238;
long long int var_15 = -139967548538497678LL;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 13524349580502999779ULL;
unsigned long long int var_20 = 2651751765148069474ULL;
int var_21 = -1946562208;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
