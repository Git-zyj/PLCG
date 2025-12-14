#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)5738;
unsigned char var_4 = (unsigned char)239;
int var_6 = -301122102;
int var_17 = -258948614;
int zero = 0;
unsigned char var_19 = (unsigned char)5;
unsigned long long int var_20 = 5459169710995846483ULL;
long long int var_21 = 1958283138000793483LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
