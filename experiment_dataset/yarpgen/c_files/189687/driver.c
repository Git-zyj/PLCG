#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1250610158U;
signed char var_2 = (signed char)56;
short var_4 = (short)-752;
unsigned short var_6 = (unsigned short)59740;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 15337945991190064988ULL;
unsigned int var_19 = 4237533496U;
int var_20 = -1601773165;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
