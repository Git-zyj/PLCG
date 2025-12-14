#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15459700319462164637ULL;
unsigned long long int var_11 = 15333223221073460913ULL;
short var_13 = (short)12955;
signed char var_14 = (signed char)74;
unsigned int var_15 = 518099595U;
int zero = 0;
unsigned short var_17 = (unsigned short)46690;
unsigned short var_18 = (unsigned short)61688;
int var_19 = 1256485633;
long long int var_20 = 2935634116070370316LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
