#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1211360444U;
signed char var_6 = (signed char)86;
unsigned int var_8 = 2217860464U;
long long int var_9 = 7048051143455307062LL;
long long int var_11 = -6902247313010569810LL;
unsigned long long int var_12 = 9367089740445877867ULL;
unsigned char var_13 = (unsigned char)172;
int zero = 0;
int var_14 = 877619771;
long long int var_15 = -8493361033736936265LL;
int var_16 = 1668565389;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
