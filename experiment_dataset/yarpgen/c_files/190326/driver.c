#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_3 = (unsigned char)28;
short var_6 = (short)25251;
signed char var_9 = (signed char)115;
int zero = 0;
int var_10 = 1332417521;
unsigned long long int var_11 = 15622750532857505131ULL;
unsigned int var_12 = 3431485335U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
