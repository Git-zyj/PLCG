#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 501532146U;
signed char var_2 = (signed char)-72;
int var_5 = 843141961;
unsigned short var_11 = (unsigned short)56238;
int zero = 0;
unsigned char var_15 = (unsigned char)117;
unsigned long long int var_16 = 14465155587270173737ULL;
void init() {
}

void checksum() {
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
