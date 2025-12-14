#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12078427072399799864ULL;
unsigned short var_7 = (unsigned short)1013;
unsigned long long int var_10 = 1869433500223917043ULL;
int zero = 0;
unsigned long long int var_20 = 9234395104231960519ULL;
unsigned char var_21 = (unsigned char)250;
void init() {
}

void checksum() {
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
