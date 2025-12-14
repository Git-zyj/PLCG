#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
signed char var_7 = (signed char)-49;
long long int var_9 = 3294057623407466472LL;
short var_10 = (short)-21252;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned short var_13 = (unsigned short)63758;
unsigned long long int var_14 = 4296085025071709406ULL;
_Bool var_15 = (_Bool)0;
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
