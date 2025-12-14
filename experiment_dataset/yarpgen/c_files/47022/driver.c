#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 3692793272549412852ULL;
unsigned long long int var_9 = 17232878030937864621ULL;
unsigned long long int var_10 = 14523461090637159262ULL;
unsigned char var_11 = (unsigned char)21;
int var_12 = -1669810439;
int zero = 0;
unsigned long long int var_16 = 2939353024415537806ULL;
int var_17 = 597433705;
unsigned char var_18 = (unsigned char)82;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
