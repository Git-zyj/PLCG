#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -651771585;
int var_1 = -268196585;
unsigned long long int var_8 = 14537939376619711241ULL;
unsigned long long int var_10 = 11881957434548555326ULL;
unsigned short var_11 = (unsigned short)11758;
unsigned char var_13 = (unsigned char)225;
int zero = 0;
int var_14 = -2145368885;
unsigned char var_15 = (unsigned char)228;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
