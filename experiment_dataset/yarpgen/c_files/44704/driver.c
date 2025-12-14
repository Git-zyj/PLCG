#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 993801591;
long long int var_5 = -4094978216158603477LL;
unsigned char var_6 = (unsigned char)248;
int zero = 0;
unsigned char var_10 = (unsigned char)247;
int var_11 = -1542817429;
unsigned int var_12 = 2217989191U;
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
