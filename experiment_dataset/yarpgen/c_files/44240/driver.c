#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)255;
unsigned char var_8 = (unsigned char)148;
unsigned char var_9 = (unsigned char)108;
unsigned char var_11 = (unsigned char)72;
int zero = 0;
unsigned char var_12 = (unsigned char)219;
unsigned char var_13 = (unsigned char)12;
unsigned char var_14 = (unsigned char)181;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
