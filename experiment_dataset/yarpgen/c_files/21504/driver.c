#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6009521194732639341ULL;
unsigned char var_13 = (unsigned char)141;
int zero = 0;
unsigned long long int var_20 = 8810430401752691370ULL;
unsigned short var_21 = (unsigned short)31749;
unsigned char var_22 = (unsigned char)196;
unsigned char var_23 = (unsigned char)198;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
