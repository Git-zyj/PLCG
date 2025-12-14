#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1384216509;
long long int var_3 = 146508452318019119LL;
signed char var_6 = (signed char)72;
signed char var_9 = (signed char)-14;
unsigned char var_12 = (unsigned char)32;
int zero = 0;
unsigned int var_13 = 853111180U;
unsigned long long int var_14 = 12450479725103899583ULL;
short var_15 = (short)-22183;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
