#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1145603192;
unsigned short var_4 = (unsigned short)37900;
unsigned short var_11 = (unsigned short)13994;
int zero = 0;
long long int var_12 = -6596929755227224573LL;
unsigned int var_13 = 3738846387U;
long long int var_14 = 696811760520395191LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
