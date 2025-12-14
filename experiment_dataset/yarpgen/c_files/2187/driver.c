#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-103;
signed char var_6 = (signed char)18;
short var_7 = (short)18939;
long long int var_8 = -8953153992477578606LL;
long long int var_10 = 2932345992153428144LL;
unsigned char var_11 = (unsigned char)172;
signed char var_13 = (signed char)6;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned short var_15 = (unsigned short)35976;
unsigned long long int var_16 = 7024436370074058363ULL;
signed char var_17 = (signed char)-69;
short var_18 = (short)20247;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
