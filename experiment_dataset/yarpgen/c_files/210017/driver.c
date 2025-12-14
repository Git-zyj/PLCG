#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)36291;
unsigned short var_10 = (unsigned short)20427;
unsigned char var_11 = (unsigned char)32;
unsigned char var_13 = (unsigned char)151;
unsigned short var_15 = (unsigned short)59012;
unsigned char var_16 = (unsigned char)198;
int zero = 0;
unsigned char var_20 = (unsigned char)29;
unsigned long long int var_21 = 5228286023357236844ULL;
unsigned long long int var_22 = 11007887474683398490ULL;
unsigned short var_23 = (unsigned short)47801;
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
