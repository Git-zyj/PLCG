#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11998;
long long int var_4 = -1420331744880679199LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
short var_13 = (short)-25995;
unsigned short var_14 = (unsigned short)25561;
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
