#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7666755147246851295ULL;
_Bool var_3 = (_Bool)1;
long long int var_5 = -7071042591739912228LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
short var_13 = (short)-19318;
unsigned int var_14 = 4160677984U;
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
