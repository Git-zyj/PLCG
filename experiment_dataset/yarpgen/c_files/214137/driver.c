#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1562967773;
unsigned int var_3 = 531228645U;
unsigned int var_5 = 1288057825U;
unsigned long long int var_11 = 16432248677575537250ULL;
short var_12 = (short)15982;
int zero = 0;
unsigned char var_19 = (unsigned char)150;
unsigned short var_20 = (unsigned short)34928;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
