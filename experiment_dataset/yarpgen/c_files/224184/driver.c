#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 909789553;
unsigned char var_9 = (unsigned char)69;
unsigned long long int var_18 = 13459513843289788762ULL;
int zero = 0;
int var_19 = -60813394;
unsigned short var_20 = (unsigned short)26240;
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
