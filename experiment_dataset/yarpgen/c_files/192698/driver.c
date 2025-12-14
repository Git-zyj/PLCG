#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2814228267U;
_Bool var_2 = (_Bool)1;
unsigned long long int var_6 = 13451981775688633286ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)41785;
short var_15 = (short)5745;
void init() {
}

void checksum() {
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
