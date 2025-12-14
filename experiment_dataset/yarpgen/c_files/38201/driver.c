#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_12 = 119457862965829326LL;
unsigned long long int var_14 = 4702900056105831520ULL;
unsigned long long int var_15 = 17776483875419272826ULL;
signed char var_16 = (signed char)52;
unsigned int var_17 = 3554471407U;
int zero = 0;
signed char var_18 = (signed char)38;
signed char var_19 = (signed char)-75;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
