#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4297;
unsigned short var_2 = (unsigned short)15213;
short var_8 = (short)-14547;
_Bool var_9 = (_Bool)1;
unsigned short var_11 = (unsigned short)24018;
long long int var_13 = -197545058385216189LL;
_Bool var_14 = (_Bool)1;
signed char var_18 = (signed char)-65;
int zero = 0;
short var_20 = (short)-24041;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
