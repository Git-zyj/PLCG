#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 3082251515U;
long long int var_2 = 6526830892842791323LL;
unsigned int var_5 = 618755914U;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)127;
unsigned short var_10 = (unsigned short)6177;
int zero = 0;
long long int var_15 = 809874501815098639LL;
unsigned long long int var_16 = 4113825766248847356ULL;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-9;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
