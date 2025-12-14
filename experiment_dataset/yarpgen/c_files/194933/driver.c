#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 17801541206970759808ULL;
unsigned short var_8 = (unsigned short)26378;
unsigned long long int var_9 = 18446103868101893958ULL;
unsigned char var_10 = (unsigned char)76;
long long int var_11 = 9120220835281030868LL;
long long int var_12 = -4914712580041971848LL;
long long int var_14 = 4208521901529916648LL;
int zero = 0;
short var_19 = (short)23554;
long long int var_20 = 795636775741841515LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
