#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)49850;
unsigned long long int var_2 = 9012399457692229048ULL;
int zero = 0;
short var_14 = (short)4196;
unsigned int var_15 = 3803658242U;
unsigned short var_16 = (unsigned short)40907;
unsigned char var_17 = (unsigned char)95;
unsigned char var_18 = (unsigned char)98;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
