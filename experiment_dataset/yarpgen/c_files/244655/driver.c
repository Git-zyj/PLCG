#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)42882;
signed char var_5 = (signed char)-109;
_Bool var_9 = (_Bool)1;
unsigned short var_12 = (unsigned short)61294;
unsigned char var_15 = (unsigned char)164;
unsigned char var_18 = (unsigned char)251;
int zero = 0;
unsigned int var_19 = 1668301124U;
unsigned char var_20 = (unsigned char)185;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
