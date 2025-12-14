#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9319651383478853185ULL;
unsigned char var_2 = (unsigned char)53;
int zero = 0;
int var_10 = -1996404851;
unsigned long long int var_11 = 5959428569500827951ULL;
short var_12 = (short)-12524;
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
