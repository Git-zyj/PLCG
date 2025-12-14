#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)7139;
unsigned long long int var_3 = 8156868012859489462ULL;
short var_4 = (short)27242;
signed char var_5 = (signed char)5;
signed char var_6 = (signed char)30;
signed char var_7 = (signed char)-56;
unsigned short var_10 = (unsigned short)20337;
short var_11 = (short)-29927;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-39;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
