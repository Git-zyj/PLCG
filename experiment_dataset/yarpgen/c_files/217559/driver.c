#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)1;
int var_9 = -1772261778;
long long int var_13 = -5019479130014011330LL;
unsigned char var_14 = (unsigned char)75;
int zero = 0;
unsigned short var_20 = (unsigned short)43213;
long long int var_21 = -7703624841120453964LL;
unsigned int var_22 = 1884765101U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
