#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)15394;
unsigned int var_4 = 1723523271U;
unsigned char var_6 = (unsigned char)17;
int var_7 = 1426989449;
signed char var_8 = (signed char)-85;
short var_9 = (short)31624;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned int var_12 = 1909994648U;
unsigned short var_13 = (unsigned short)25022;
int var_14 = 1086180576;
void init() {
}

void checksum() {
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
