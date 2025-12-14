#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -819563860;
int var_9 = -1304913774;
unsigned long long int var_12 = 6575018226221812146ULL;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 3756571873298962312ULL;
short var_15 = (short)-10826;
short var_16 = (short)5905;
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
