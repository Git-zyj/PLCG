#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 664151766U;
unsigned short var_2 = (unsigned short)10641;
unsigned int var_4 = 2764019173U;
unsigned char var_12 = (unsigned char)63;
unsigned long long int var_19 = 17514097801127901038ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)34056;
unsigned short var_21 = (unsigned short)64320;
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
