#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1788708290;
unsigned char var_1 = (unsigned char)41;
unsigned short var_2 = (unsigned short)56390;
unsigned char var_6 = (unsigned char)90;
unsigned int var_8 = 2079782249U;
unsigned short var_9 = (unsigned short)52670;
int zero = 0;
unsigned short var_10 = (unsigned short)45795;
unsigned char var_11 = (unsigned char)111;
long long int var_12 = -5018653828674240036LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
