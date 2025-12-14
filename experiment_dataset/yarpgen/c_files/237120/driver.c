#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7026;
unsigned long long int var_1 = 5124970015708451811ULL;
unsigned long long int var_3 = 2619664435480943925ULL;
unsigned long long int var_4 = 1947996428008407409ULL;
int var_6 = -1949187553;
unsigned char var_8 = (unsigned char)224;
int var_9 = 1952756101;
int zero = 0;
int var_10 = 647057855;
unsigned long long int var_11 = 5973031415594578990ULL;
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
