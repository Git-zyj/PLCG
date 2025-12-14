#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1019615404U;
long long int var_4 = 234662660504305496LL;
unsigned short var_5 = (unsigned short)55022;
unsigned long long int var_6 = 2788448681724645973ULL;
unsigned int var_9 = 1778032865U;
unsigned short var_10 = (unsigned short)34797;
unsigned short var_13 = (unsigned short)7988;
unsigned char var_15 = (unsigned char)213;
int zero = 0;
int var_18 = 567900437;
unsigned short var_19 = (unsigned short)59190;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
