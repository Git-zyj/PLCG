#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)73;
unsigned long long int var_5 = 12723090301870965747ULL;
short var_11 = (short)-10109;
int var_12 = -206387590;
int zero = 0;
unsigned char var_13 = (unsigned char)251;
unsigned short var_14 = (unsigned short)26591;
unsigned long long int var_15 = 2508546769511632162ULL;
int var_16 = -829372679;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
