#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-107;
unsigned long long int var_2 = 1841190148645869269ULL;
unsigned short var_4 = (unsigned short)27328;
_Bool var_5 = (_Bool)1;
unsigned char var_10 = (unsigned char)88;
long long int var_15 = 4976846016308314820LL;
long long int var_16 = -8158592656228742490LL;
int zero = 0;
signed char var_20 = (signed char)-29;
int var_21 = -1321132201;
short var_22 = (short)-23825;
int var_23 = 1486267524;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
