#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 147993786;
unsigned char var_10 = (unsigned char)219;
unsigned char var_19 = (unsigned char)128;
int zero = 0;
unsigned short var_20 = (unsigned short)6631;
unsigned char var_21 = (unsigned char)38;
long long int var_22 = 3311961888521621964LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
