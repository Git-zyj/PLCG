#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36484;
unsigned int var_3 = 3604748271U;
unsigned short var_6 = (unsigned short)59944;
unsigned int var_11 = 2235620046U;
int zero = 0;
long long int var_13 = 9178094188290415123LL;
long long int var_14 = -4675415248216665981LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
