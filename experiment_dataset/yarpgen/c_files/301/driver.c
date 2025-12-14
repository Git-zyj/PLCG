#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11384732131298737164ULL;
unsigned char var_3 = (unsigned char)195;
unsigned char var_4 = (unsigned char)165;
unsigned char var_6 = (unsigned char)252;
unsigned char var_7 = (unsigned char)247;
unsigned char var_9 = (unsigned char)18;
int zero = 0;
unsigned char var_10 = (unsigned char)104;
unsigned char var_11 = (unsigned char)94;
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
