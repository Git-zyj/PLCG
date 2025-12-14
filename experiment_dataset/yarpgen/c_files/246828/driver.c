#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3858;
short var_3 = (short)-4196;
_Bool var_4 = (_Bool)1;
short var_5 = (short)-24334;
short var_10 = (short)-20630;
int zero = 0;
long long int var_14 = -1775457466210711919LL;
unsigned int var_15 = 2087544975U;
int var_16 = 1141253592;
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
