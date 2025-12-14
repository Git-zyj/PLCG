#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-65;
unsigned char var_4 = (unsigned char)55;
unsigned long long int var_9 = 18003675364021761449ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)2086;
unsigned char var_11 = (unsigned char)120;
signed char var_12 = (signed char)37;
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
