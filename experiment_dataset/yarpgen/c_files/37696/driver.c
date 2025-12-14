#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)70;
unsigned long long int var_2 = 10442912536019836270ULL;
unsigned long long int var_3 = 18271422887609185409ULL;
unsigned int var_5 = 2966848425U;
unsigned char var_12 = (unsigned char)162;
unsigned char var_14 = (unsigned char)237;
int zero = 0;
unsigned long long int var_18 = 962430877597167944ULL;
unsigned long long int var_19 = 18117945788378892156ULL;
void init() {
}

void checksum() {
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
