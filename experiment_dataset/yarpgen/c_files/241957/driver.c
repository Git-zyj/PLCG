#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1087318149152262402ULL;
int var_1 = -489733485;
unsigned short var_3 = (unsigned short)6001;
long long int var_4 = -2842762015245861896LL;
int zero = 0;
unsigned long long int var_10 = 13190081266537914703ULL;
signed char var_11 = (signed char)-124;
unsigned char var_12 = (unsigned char)219;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
