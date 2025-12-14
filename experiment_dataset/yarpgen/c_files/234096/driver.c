#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50964;
int var_1 = 2048368823;
unsigned long long int var_2 = 8150626698064579026ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)43;
unsigned int var_17 = 1548502507U;
int var_18 = 1340090633;
void init() {
}

void checksum() {
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
