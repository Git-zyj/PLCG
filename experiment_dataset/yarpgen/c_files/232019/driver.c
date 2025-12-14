#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)31375;
_Bool var_6 = (_Bool)0;
unsigned long long int var_9 = 22781802760846006ULL;
unsigned int var_10 = 1606371626U;
int zero = 0;
unsigned short var_11 = (unsigned short)64496;
unsigned char var_12 = (unsigned char)183;
unsigned char var_13 = (unsigned char)232;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
