#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)53535;
signed char var_2 = (signed char)47;
long long int var_5 = 63720185362033232LL;
long long int var_9 = 4686140465365418766LL;
int zero = 0;
long long int var_11 = 4860580337363096630LL;
signed char var_12 = (signed char)-3;
unsigned char var_13 = (unsigned char)233;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
