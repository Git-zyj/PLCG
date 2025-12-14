#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8551454716932153166ULL;
unsigned char var_3 = (unsigned char)106;
unsigned char var_7 = (unsigned char)177;
long long int var_8 = 2307037805035653848LL;
int zero = 0;
unsigned char var_12 = (unsigned char)25;
short var_13 = (short)-13419;
void init() {
}

void checksum() {
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
