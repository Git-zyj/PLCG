#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7617241546818795871ULL;
unsigned int var_2 = 1787326147U;
unsigned long long int var_4 = 10628836618720656462ULL;
long long int var_6 = -9021050160865456887LL;
unsigned char var_9 = (unsigned char)219;
unsigned char var_10 = (unsigned char)4;
unsigned char var_15 = (unsigned char)80;
unsigned short var_18 = (unsigned short)27612;
int zero = 0;
unsigned char var_20 = (unsigned char)246;
int var_21 = -16091432;
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
