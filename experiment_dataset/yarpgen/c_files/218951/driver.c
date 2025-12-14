#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)33633;
unsigned char var_7 = (unsigned char)246;
unsigned long long int var_10 = 6386441249397541022ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)62705;
signed char var_13 = (signed char)-108;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
