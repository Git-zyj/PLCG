#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)108;
unsigned char var_3 = (unsigned char)169;
unsigned int var_4 = 2630769053U;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)26206;
short var_12 = (short)-6129;
int zero = 0;
unsigned long long int var_13 = 10972589063830798269ULL;
signed char var_14 = (signed char)-67;
unsigned char var_15 = (unsigned char)73;
unsigned char var_16 = (unsigned char)115;
short var_17 = (short)-8469;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
