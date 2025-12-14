#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)11;
unsigned char var_9 = (unsigned char)220;
long long int var_10 = 6245351013614180939LL;
long long int var_12 = -3041449422683850540LL;
int zero = 0;
unsigned short var_17 = (unsigned short)56563;
unsigned int var_18 = 2827397353U;
int var_19 = -111760882;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
