#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 13200677880269731581ULL;
unsigned char var_5 = (unsigned char)239;
signed char var_10 = (signed char)-59;
short var_11 = (short)-8052;
signed char var_12 = (signed char)-3;
signed char var_14 = (signed char)-101;
int zero = 0;
unsigned long long int var_15 = 14477367318220808410ULL;
unsigned long long int var_16 = 8805136814944777488ULL;
unsigned long long int var_17 = 170763878509882347ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
