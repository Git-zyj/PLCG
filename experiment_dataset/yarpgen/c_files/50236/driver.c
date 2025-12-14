#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22829;
unsigned char var_3 = (unsigned char)199;
unsigned long long int var_4 = 4842823199075792276ULL;
unsigned long long int var_11 = 15739473924725964312ULL;
unsigned long long int var_12 = 3326600715742982337ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)141;
unsigned short var_17 = (unsigned short)31795;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
