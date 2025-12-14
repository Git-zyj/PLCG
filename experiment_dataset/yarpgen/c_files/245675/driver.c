#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-15108;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 1747559721008992201ULL;
signed char var_10 = (signed char)-19;
int zero = 0;
unsigned long long int var_13 = 13673078539826905968ULL;
unsigned long long int var_14 = 9724291701547124991ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
