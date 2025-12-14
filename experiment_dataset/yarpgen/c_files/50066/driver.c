#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)40504;
int var_5 = 1013137968;
short var_8 = (short)1247;
_Bool var_14 = (_Bool)1;
unsigned long long int var_16 = 3803527439096976373ULL;
int zero = 0;
signed char var_19 = (signed char)48;
signed char var_20 = (signed char)-106;
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
