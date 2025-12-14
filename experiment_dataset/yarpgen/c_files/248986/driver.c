#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-114;
unsigned long long int var_3 = 4637873195825783496ULL;
_Bool var_4 = (_Bool)0;
short var_5 = (short)17050;
signed char var_7 = (signed char)-126;
unsigned int var_8 = 3661566401U;
int zero = 0;
unsigned short var_12 = (unsigned short)60756;
unsigned long long int var_13 = 15820354767844530809ULL;
short var_14 = (short)-5250;
unsigned long long int var_15 = 5062752031782524584ULL;
long long int var_16 = -5647083749646642099LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
