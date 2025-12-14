#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 919305903;
short var_4 = (short)26424;
signed char var_9 = (signed char)63;
unsigned int var_11 = 132296212U;
int zero = 0;
signed char var_15 = (signed char)-113;
unsigned long long int var_16 = 3871375528979187057ULL;
signed char var_17 = (signed char)-49;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
