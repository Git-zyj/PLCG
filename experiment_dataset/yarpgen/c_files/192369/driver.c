#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -974317642180598332LL;
unsigned char var_1 = (unsigned char)117;
unsigned char var_5 = (unsigned char)198;
int var_7 = -1181070455;
int zero = 0;
unsigned char var_11 = (unsigned char)9;
unsigned char var_12 = (unsigned char)71;
void init() {
}

void checksum() {
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
