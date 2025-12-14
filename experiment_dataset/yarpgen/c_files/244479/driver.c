#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-19657;
long long int var_6 = -3633758731754695883LL;
long long int var_7 = -7207648806812591060LL;
unsigned char var_8 = (unsigned char)75;
int zero = 0;
unsigned char var_10 = (unsigned char)197;
long long int var_11 = 1188196536144622237LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
