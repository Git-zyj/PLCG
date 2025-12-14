#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)49;
int var_6 = 522016733;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 10276883228059223572ULL;
unsigned short var_9 = (unsigned short)20330;
int zero = 0;
short var_16 = (short)11135;
signed char var_17 = (signed char)116;
void init() {
}

void checksum() {
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
