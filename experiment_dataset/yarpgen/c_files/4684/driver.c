#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 2483833020397759267LL;
unsigned int var_4 = 3429700864U;
long long int var_15 = -7738634684713470597LL;
short var_16 = (short)-14539;
int zero = 0;
unsigned char var_17 = (unsigned char)148;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
