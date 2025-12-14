#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6602914213781993509ULL;
unsigned char var_1 = (unsigned char)40;
unsigned int var_3 = 1625491394U;
unsigned short var_7 = (unsigned short)21186;
signed char var_8 = (signed char)-35;
int zero = 0;
unsigned int var_10 = 4190154480U;
unsigned int var_11 = 3951501980U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
