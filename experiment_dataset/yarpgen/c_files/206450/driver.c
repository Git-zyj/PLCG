#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)151;
unsigned long long int var_4 = 7682521729392939329ULL;
unsigned char var_6 = (unsigned char)41;
unsigned long long int var_8 = 13231718596616425546ULL;
unsigned int var_12 = 2630550738U;
int var_17 = -90230507;
short var_18 = (short)-22827;
int zero = 0;
unsigned int var_19 = 174168142U;
unsigned short var_20 = (unsigned short)51226;
unsigned char var_21 = (unsigned char)105;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
