#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)34;
unsigned char var_4 = (unsigned char)175;
unsigned long long int var_7 = 218930488220647528ULL;
int zero = 0;
long long int var_18 = 4536089783902996857LL;
unsigned short var_19 = (unsigned short)19161;
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
