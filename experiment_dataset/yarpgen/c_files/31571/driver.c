#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 9154728416352248411LL;
unsigned char var_4 = (unsigned char)175;
int var_9 = -1740618607;
_Bool var_14 = (_Bool)0;
int zero = 0;
signed char var_15 = (signed char)98;
long long int var_16 = 5630491350134105539LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
