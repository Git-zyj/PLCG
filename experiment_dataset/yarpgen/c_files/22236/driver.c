#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)61;
unsigned int var_3 = 1892506138U;
unsigned int var_6 = 771919099U;
unsigned short var_9 = (unsigned short)42865;
int var_10 = 1448815171;
signed char var_12 = (signed char)40;
int zero = 0;
unsigned char var_13 = (unsigned char)175;
unsigned int var_14 = 762148464U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
