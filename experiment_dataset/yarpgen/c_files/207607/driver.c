#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -1932540358;
signed char var_9 = (signed char)-30;
unsigned char var_10 = (unsigned char)158;
short var_11 = (short)12415;
unsigned char var_17 = (unsigned char)166;
unsigned char var_19 = (unsigned char)226;
int zero = 0;
unsigned long long int var_20 = 13203602111992903644ULL;
unsigned int var_21 = 2652142663U;
unsigned int var_22 = 2347548947U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
