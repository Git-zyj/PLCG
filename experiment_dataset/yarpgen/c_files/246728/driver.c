#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7000560811637660963LL;
unsigned short var_4 = (unsigned short)19152;
unsigned short var_7 = (unsigned short)10141;
unsigned char var_11 = (unsigned char)43;
unsigned int var_13 = 1630582555U;
int zero = 0;
unsigned short var_14 = (unsigned short)53175;
long long int var_15 = -5178169655972319639LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
