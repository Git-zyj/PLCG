#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3761132362U;
unsigned long long int var_2 = 3946178988461723630ULL;
short var_7 = (short)5394;
int var_8 = 1119266671;
unsigned short var_9 = (unsigned short)43875;
unsigned long long int var_11 = 10382932681051635202ULL;
signed char var_12 = (signed char)-85;
int zero = 0;
int var_13 = 392691702;
short var_14 = (short)19824;
unsigned int var_15 = 2337796807U;
unsigned long long int var_16 = 4829023533196497475ULL;
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
