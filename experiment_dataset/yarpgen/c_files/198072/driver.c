#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)21817;
unsigned long long int var_6 = 15174975335701375420ULL;
signed char var_8 = (signed char)96;
unsigned short var_10 = (unsigned short)31851;
unsigned char var_11 = (unsigned char)233;
unsigned char var_13 = (unsigned char)124;
unsigned int var_14 = 900804160U;
long long int var_18 = 2677511176916038862LL;
int zero = 0;
unsigned char var_19 = (unsigned char)128;
_Bool var_20 = (_Bool)0;
long long int var_21 = -4614979882996798437LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
