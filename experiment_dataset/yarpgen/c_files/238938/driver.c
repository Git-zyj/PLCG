#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13632649781820814037ULL;
unsigned char var_5 = (unsigned char)85;
unsigned short var_6 = (unsigned short)23425;
unsigned int var_7 = 2304125530U;
int zero = 0;
signed char var_10 = (signed char)39;
unsigned char var_11 = (unsigned char)41;
unsigned char var_12 = (unsigned char)109;
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
