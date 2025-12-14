#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_3 = (unsigned char)178;
long long int var_5 = 6323823767236470247LL;
unsigned int var_8 = 933527059U;
unsigned long long int var_9 = 3976265560807294200ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)38857;
unsigned long long int var_12 = 18161727950885534699ULL;
unsigned char var_13 = (unsigned char)106;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
