#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 2128296418387443923LL;
unsigned short var_5 = (unsigned short)55023;
int var_7 = 1413433861;
unsigned char var_11 = (unsigned char)150;
int zero = 0;
unsigned int var_18 = 449025606U;
unsigned short var_19 = (unsigned short)46217;
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
