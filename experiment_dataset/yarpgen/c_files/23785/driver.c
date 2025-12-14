#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)236;
unsigned int var_2 = 1152792679U;
int var_6 = -606164566;
int var_9 = 922182018;
int var_10 = 2079022598;
int zero = 0;
unsigned long long int var_12 = 1816066151399380117ULL;
unsigned short var_13 = (unsigned short)48621;
unsigned short var_14 = (unsigned short)55935;
int var_15 = 417212554;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
