#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 1080633787U;
unsigned short var_11 = (unsigned short)58341;
unsigned long long int var_13 = 16180855737124040203ULL;
unsigned short var_14 = (unsigned short)18737;
unsigned char var_15 = (unsigned char)120;
unsigned char var_17 = (unsigned char)169;
int zero = 0;
unsigned int var_20 = 1076946887U;
unsigned long long int var_21 = 4582598461238027360ULL;
void init() {
}

void checksum() {
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
