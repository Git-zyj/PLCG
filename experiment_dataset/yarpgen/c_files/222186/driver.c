#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 401238236U;
_Bool var_2 = (_Bool)0;
unsigned int var_4 = 4102299550U;
signed char var_7 = (signed char)75;
unsigned long long int var_10 = 18288357525248976464ULL;
unsigned short var_11 = (unsigned short)47657;
int zero = 0;
unsigned int var_14 = 574672409U;
unsigned int var_15 = 3899367516U;
unsigned char var_16 = (unsigned char)177;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
