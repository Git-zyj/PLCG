#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)36002;
unsigned short var_3 = (unsigned short)63697;
unsigned long long int var_7 = 12361052636555276524ULL;
unsigned long long int var_9 = 1860205129848423495ULL;
unsigned long long int var_14 = 9411741375488789748ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)29404;
unsigned char var_16 = (unsigned char)238;
int var_17 = 1513027653;
unsigned char var_18 = (unsigned char)241;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
