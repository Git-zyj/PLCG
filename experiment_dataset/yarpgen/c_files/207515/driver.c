#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 3704076369385123263LL;
unsigned short var_8 = (unsigned short)53740;
long long int var_12 = -7411687761245299810LL;
int zero = 0;
short var_14 = (short)15342;
unsigned short var_15 = (unsigned short)18950;
long long int var_16 = -53488717452382095LL;
unsigned char var_17 = (unsigned char)68;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
