#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13417169989423431743ULL;
short var_3 = (short)17718;
unsigned long long int var_4 = 6624443946928783222ULL;
int var_6 = 874697511;
short var_8 = (short)1457;
int zero = 0;
unsigned long long int var_11 = 16452546292510697644ULL;
unsigned char var_12 = (unsigned char)241;
void init() {
}

void checksum() {
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
