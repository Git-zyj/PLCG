#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -904119533;
unsigned int var_2 = 1751108243U;
unsigned int var_11 = 3878549789U;
unsigned char var_15 = (unsigned char)25;
_Bool var_16 = (_Bool)0;
int var_17 = 1513583215;
int zero = 0;
short var_18 = (short)-19732;
long long int var_19 = -4649837332109431146LL;
short var_20 = (short)-27146;
long long int var_21 = -8550163281776728852LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
