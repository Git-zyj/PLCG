#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-109;
long long int var_2 = 4518669844675642525LL;
unsigned int var_3 = 3274592609U;
signed char var_5 = (signed char)112;
short var_7 = (short)-2831;
int zero = 0;
unsigned short var_12 = (unsigned short)6053;
unsigned long long int var_13 = 6544848643377063705ULL;
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
