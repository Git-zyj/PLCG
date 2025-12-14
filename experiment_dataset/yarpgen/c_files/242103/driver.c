#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36274;
unsigned long long int var_1 = 11704020582285685102ULL;
unsigned long long int var_2 = 15998030331551159616ULL;
signed char var_3 = (signed char)103;
unsigned char var_4 = (unsigned char)179;
_Bool var_7 = (_Bool)1;
long long int var_10 = -3151146104763909224LL;
int var_16 = 1628068137;
int zero = 0;
unsigned long long int var_17 = 18166207395358008588ULL;
long long int var_18 = 2340079316593438576LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
