#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)24692;
signed char var_7 = (signed char)104;
signed char var_8 = (signed char)111;
long long int var_11 = 6152338302133840085LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_18 = (unsigned short)37165;
unsigned short var_19 = (unsigned short)15554;
short var_20 = (short)-1794;
_Bool var_21 = (_Bool)0;
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
