#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16471105137354216962ULL;
short var_1 = (short)-27749;
short var_8 = (short)11011;
unsigned short var_9 = (unsigned short)47040;
signed char var_11 = (signed char)48;
unsigned long long int var_12 = 11994176964537997934ULL;
int zero = 0;
signed char var_14 = (signed char)-63;
long long int var_15 = -8730857612092831533LL;
long long int var_16 = 1060053908156930836LL;
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
