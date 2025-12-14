#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)55111;
signed char var_4 = (signed char)12;
unsigned int var_7 = 1486996772U;
long long int var_12 = 3505997962983803299LL;
long long int var_17 = -3139993652444568956LL;
int zero = 0;
unsigned long long int var_18 = 9857057179943510565ULL;
unsigned long long int var_19 = 13453375556023740052ULL;
short var_20 = (short)15819;
long long int var_21 = 9048194712759677518LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
