#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1533360776229482345LL;
short var_2 = (short)7201;
unsigned char var_4 = (unsigned char)83;
signed char var_7 = (signed char)70;
int zero = 0;
unsigned char var_20 = (unsigned char)35;
short var_21 = (short)-12478;
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
