#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 305853436;
unsigned int var_2 = 488850293U;
unsigned char var_4 = (unsigned char)144;
unsigned char var_9 = (unsigned char)3;
int zero = 0;
unsigned short var_17 = (unsigned short)62259;
unsigned int var_18 = 1612950110U;
void init() {
}

void checksum() {
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
