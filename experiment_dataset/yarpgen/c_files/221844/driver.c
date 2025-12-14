#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)54032;
unsigned char var_4 = (unsigned char)186;
long long int var_10 = -4710805637424393956LL;
int zero = 0;
short var_20 = (short)15359;
short var_21 = (short)-1081;
unsigned short var_22 = (unsigned short)50255;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
