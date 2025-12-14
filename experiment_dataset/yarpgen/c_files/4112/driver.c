#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)90;
unsigned long long int var_1 = 16426761643619543630ULL;
unsigned char var_2 = (unsigned char)208;
unsigned char var_3 = (unsigned char)107;
unsigned char var_6 = (unsigned char)128;
unsigned char var_7 = (unsigned char)223;
unsigned char var_8 = (unsigned char)138;
int zero = 0;
unsigned char var_13 = (unsigned char)149;
unsigned char var_14 = (unsigned char)142;
unsigned char var_15 = (unsigned char)122;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
