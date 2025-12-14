#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)34516;
unsigned char var_4 = (unsigned char)138;
unsigned short var_6 = (unsigned short)46393;
int zero = 0;
unsigned short var_11 = (unsigned short)33013;
unsigned long long int var_12 = 9247223565696760090ULL;
unsigned char var_13 = (unsigned char)108;
unsigned short var_14 = (unsigned short)55983;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
