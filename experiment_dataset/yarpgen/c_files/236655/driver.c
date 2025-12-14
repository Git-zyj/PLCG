#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3337759850U;
unsigned char var_4 = (unsigned char)141;
unsigned long long int var_5 = 5868809446779476943ULL;
unsigned int var_6 = 2263705625U;
unsigned char var_7 = (unsigned char)202;
int zero = 0;
unsigned char var_10 = (unsigned char)121;
int var_11 = -150315978;
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
