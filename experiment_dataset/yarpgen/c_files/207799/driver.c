#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3577946102747004788LL;
unsigned int var_4 = 3416378606U;
long long int var_10 = -7890683712810474905LL;
unsigned char var_12 = (unsigned char)133;
unsigned int var_16 = 686875887U;
int zero = 0;
int var_17 = -2094512306;
unsigned short var_18 = (unsigned short)54554;
unsigned short var_19 = (unsigned short)33465;
unsigned long long int var_20 = 12194625328018988520ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
