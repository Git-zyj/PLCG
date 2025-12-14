#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 358054568U;
unsigned int var_2 = 3306511476U;
unsigned int var_3 = 307653243U;
unsigned int var_4 = 1387348793U;
unsigned int var_5 = 890205560U;
unsigned int var_6 = 3452541500U;
unsigned int var_9 = 2717229366U;
int zero = 0;
unsigned short var_10 = (unsigned short)45879;
unsigned char var_11 = (unsigned char)82;
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
