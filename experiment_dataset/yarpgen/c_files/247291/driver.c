#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)39;
unsigned char var_4 = (unsigned char)60;
unsigned char var_5 = (unsigned char)119;
unsigned char var_6 = (unsigned char)172;
unsigned char var_7 = (unsigned char)138;
int zero = 0;
unsigned char var_10 = (unsigned char)107;
unsigned char var_11 = (unsigned char)47;
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
