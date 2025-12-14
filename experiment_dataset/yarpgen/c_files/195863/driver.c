#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9869535931553582470ULL;
unsigned char var_3 = (unsigned char)121;
unsigned char var_9 = (unsigned char)78;
int zero = 0;
unsigned char var_11 = (unsigned char)156;
unsigned short var_12 = (unsigned short)51778;
unsigned long long int var_13 = 795875822028251453ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
