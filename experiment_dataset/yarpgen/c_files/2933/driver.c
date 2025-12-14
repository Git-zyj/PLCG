#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3927521680371579505LL;
long long int var_7 = -2777491350093858746LL;
unsigned char var_8 = (unsigned char)175;
unsigned char var_9 = (unsigned char)231;
short var_11 = (short)17576;
unsigned int var_18 = 3694377206U;
int zero = 0;
long long int var_20 = -7387808878849183056LL;
unsigned short var_21 = (unsigned short)24628;
unsigned int var_22 = 1474652679U;
long long int var_23 = -3083853005362339185LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
