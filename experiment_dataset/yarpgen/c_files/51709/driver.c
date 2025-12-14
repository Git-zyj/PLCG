#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 166190054;
unsigned long long int var_6 = 11687215728780970415ULL;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-31137;
unsigned long long int var_10 = 3535070884050793848ULL;
unsigned long long int var_13 = 2544116450459087802ULL;
signed char var_15 = (signed char)-63;
int zero = 0;
int var_16 = 599862852;
unsigned long long int var_17 = 12684192317150813355ULL;
unsigned short var_18 = (unsigned short)47241;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
