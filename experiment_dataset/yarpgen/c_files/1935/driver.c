#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)49;
signed char var_7 = (signed char)-63;
unsigned char var_15 = (unsigned char)21;
int zero = 0;
unsigned short var_17 = (unsigned short)12249;
unsigned int var_18 = 4120704797U;
int var_19 = -1652874268;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
