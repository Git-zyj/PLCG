#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-16;
unsigned int var_3 = 3789903820U;
_Bool var_4 = (_Bool)1;
long long int var_6 = -3616541773675904550LL;
signed char var_9 = (signed char)-42;
unsigned char var_12 = (unsigned char)31;
unsigned char var_13 = (unsigned char)245;
long long int var_16 = -6372388059145902033LL;
int zero = 0;
short var_20 = (short)-31200;
short var_21 = (short)-3536;
void init() {
}

void checksum() {
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
