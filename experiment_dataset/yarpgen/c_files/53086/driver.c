#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 203251875U;
unsigned short var_7 = (unsigned short)52279;
unsigned char var_8 = (unsigned char)111;
long long int var_9 = -500874968062492382LL;
int zero = 0;
unsigned int var_17 = 81883836U;
unsigned char var_18 = (unsigned char)42;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
