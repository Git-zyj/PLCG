#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10967;
unsigned long long int var_8 = 3583227081318588853ULL;
unsigned char var_10 = (unsigned char)201;
int zero = 0;
unsigned short var_11 = (unsigned short)46994;
unsigned long long int var_12 = 9269943005819251477ULL;
unsigned long long int var_13 = 14957961196675312012ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
