#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3064386107U;
unsigned short var_1 = (unsigned short)20392;
_Bool var_7 = (_Bool)0;
int zero = 0;
unsigned char var_13 = (unsigned char)251;
short var_14 = (short)17077;
unsigned long long int var_15 = 12638361495363726554ULL;
void init() {
}

void checksum() {
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
