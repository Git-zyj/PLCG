#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-15655;
unsigned char var_3 = (unsigned char)151;
unsigned char var_4 = (unsigned char)19;
unsigned int var_7 = 4158517156U;
int zero = 0;
unsigned char var_17 = (unsigned char)58;
unsigned int var_18 = 3780607742U;
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
