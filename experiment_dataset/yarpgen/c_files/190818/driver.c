#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5702373588785552519ULL;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 2139943895U;
unsigned long long int var_5 = 5802385402153519501ULL;
unsigned short var_7 = (unsigned short)17928;
unsigned int var_8 = 2404717279U;
unsigned short var_9 = (unsigned short)64689;
signed char var_11 = (signed char)-112;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)126;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
