#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-106;
signed char var_5 = (signed char)59;
unsigned long long int var_6 = 3964570782156951146ULL;
unsigned short var_7 = (unsigned short)11082;
unsigned long long int var_10 = 5983273854553077483ULL;
int var_11 = -1473554178;
int zero = 0;
int var_14 = -22454494;
unsigned short var_15 = (unsigned short)49226;
int var_16 = 1715633515;
unsigned int var_17 = 3119485297U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
