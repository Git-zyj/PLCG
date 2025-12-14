#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2580962875U;
unsigned int var_4 = 4273908523U;
unsigned short var_6 = (unsigned short)33497;
unsigned int var_8 = 3060125303U;
int zero = 0;
unsigned char var_13 = (unsigned char)252;
long long int var_14 = 9154391686402376452LL;
signed char var_15 = (signed char)-112;
unsigned int var_16 = 3282826328U;
unsigned short var_17 = (unsigned short)44111;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
