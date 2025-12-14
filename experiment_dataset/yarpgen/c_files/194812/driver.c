#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)23881;
int var_4 = -159761553;
unsigned short var_5 = (unsigned short)31547;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)3896;
long long int var_10 = 5888521792667588379LL;
short var_14 = (short)10846;
int zero = 0;
short var_16 = (short)20518;
long long int var_17 = -2943995328854001787LL;
unsigned long long int var_18 = 1121676972550763970ULL;
signed char var_19 = (signed char)-95;
unsigned short var_20 = (unsigned short)50485;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
