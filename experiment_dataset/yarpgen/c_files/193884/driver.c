#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_2 = -294917777;
unsigned int var_5 = 3934823741U;
signed char var_6 = (signed char)-87;
int var_7 = -2054923906;
int var_11 = 2071179031;
int zero = 0;
long long int var_12 = 9011160254187404198LL;
int var_13 = -386308668;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
