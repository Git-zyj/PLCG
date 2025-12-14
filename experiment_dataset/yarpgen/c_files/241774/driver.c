#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29443;
unsigned short var_2 = (unsigned short)17900;
unsigned short var_4 = (unsigned short)48418;
long long int var_9 = -4169883406100477332LL;
long long int var_10 = -7164855271610151274LL;
_Bool var_14 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)-94;
unsigned int var_20 = 1975397434U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
