#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)141;
unsigned char var_6 = (unsigned char)107;
unsigned long long int var_7 = 8131521128791101748ULL;
unsigned long long int var_13 = 2318764623295848804ULL;
unsigned long long int var_16 = 12522255072802385226ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)150;
unsigned long long int var_19 = 1177706978481114653ULL;
unsigned char var_20 = (unsigned char)208;
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
