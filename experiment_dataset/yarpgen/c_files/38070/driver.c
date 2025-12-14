#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24203;
int var_2 = -289992517;
unsigned short var_6 = (unsigned short)32081;
int zero = 0;
unsigned short var_10 = (unsigned short)962;
unsigned char var_11 = (unsigned char)156;
unsigned long long int var_12 = 4832801500998758930ULL;
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
