#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7624522318025758110ULL;
signed char var_5 = (signed char)23;
unsigned long long int var_6 = 10332745284695717203ULL;
long long int var_15 = -3099684961352827734LL;
int zero = 0;
unsigned char var_17 = (unsigned char)205;
long long int var_18 = -5170303539847743420LL;
unsigned char var_19 = (unsigned char)207;
unsigned short var_20 = (unsigned short)45486;
void init() {
}

void checksum() {
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
