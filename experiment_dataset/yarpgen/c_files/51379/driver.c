#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14577361992528129717ULL;
signed char var_1 = (signed char)-30;
unsigned char var_2 = (unsigned char)177;
unsigned short var_3 = (unsigned short)6449;
unsigned long long int var_4 = 484906007847268281ULL;
unsigned long long int var_6 = 18230041929944944566ULL;
int zero = 0;
unsigned int var_13 = 437550995U;
unsigned long long int var_14 = 6353921411607937633ULL;
signed char var_15 = (signed char)103;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
