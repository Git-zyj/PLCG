#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63169;
unsigned char var_6 = (unsigned char)146;
long long int var_8 = 5134397823375444518LL;
signed char var_10 = (signed char)-35;
unsigned long long int var_12 = 11772810643948744367ULL;
unsigned short var_17 = (unsigned short)30329;
int zero = 0;
int var_18 = 1162923731;
unsigned char var_19 = (unsigned char)200;
long long int var_20 = 4906507905166735635LL;
void init() {
}

void checksum() {
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
