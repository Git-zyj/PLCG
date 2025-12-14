#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-1162;
unsigned long long int var_6 = 4316265634850131902ULL;
int var_7 = -1625082380;
short var_9 = (short)7815;
short var_11 = (short)-25922;
_Bool var_15 = (_Bool)1;
int zero = 0;
long long int var_18 = 8469169434915753982LL;
unsigned long long int var_19 = 4368276812515140045ULL;
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
