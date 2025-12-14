#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 504211926;
unsigned char var_4 = (unsigned char)187;
unsigned long long int var_8 = 14787999043876777579ULL;
short var_9 = (short)-8513;
unsigned char var_14 = (unsigned char)252;
unsigned int var_17 = 412019024U;
int zero = 0;
unsigned short var_19 = (unsigned short)37645;
short var_20 = (short)-15622;
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
