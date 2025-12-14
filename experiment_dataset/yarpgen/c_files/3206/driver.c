#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3144844884372037494ULL;
long long int var_2 = 1063255941082439170LL;
unsigned char var_5 = (unsigned char)246;
long long int var_9 = 1553886037193324166LL;
int zero = 0;
unsigned short var_10 = (unsigned short)57917;
unsigned int var_11 = 1399270074U;
long long int var_12 = -431139966153411192LL;
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
