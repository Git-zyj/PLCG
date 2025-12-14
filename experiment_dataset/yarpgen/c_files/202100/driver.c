#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29057;
_Bool var_2 = (_Bool)0;
long long int var_7 = -1665051708606001173LL;
unsigned int var_11 = 2437568472U;
short var_13 = (short)3804;
int zero = 0;
long long int var_16 = -6910379275723351319LL;
unsigned long long int var_17 = 15919041954396894964ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
