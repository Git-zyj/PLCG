#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)121;
unsigned int var_2 = 646624072U;
signed char var_4 = (signed char)43;
unsigned short var_7 = (unsigned short)52226;
short var_8 = (short)-18853;
unsigned short var_9 = (unsigned short)63421;
int zero = 0;
signed char var_11 = (signed char)73;
short var_12 = (short)23056;
short var_13 = (short)17529;
unsigned long long int var_14 = 12524810880359840564ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
