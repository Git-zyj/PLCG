#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)117;
int var_12 = -1985201062;
unsigned short var_13 = (unsigned short)43258;
int zero = 0;
unsigned short var_16 = (unsigned short)33386;
int var_17 = 395403515;
unsigned int var_18 = 838424703U;
unsigned int var_19 = 2313228108U;
unsigned char var_20 = (unsigned char)114;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
