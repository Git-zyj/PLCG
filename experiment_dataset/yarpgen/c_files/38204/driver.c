#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_4 = (_Bool)0;
unsigned short var_10 = (unsigned short)44065;
unsigned short var_12 = (unsigned short)20789;
unsigned long long int var_18 = 15381690461081359995ULL;
int zero = 0;
short var_19 = (short)-297;
unsigned short var_20 = (unsigned short)64305;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
