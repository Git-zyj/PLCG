#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)71;
short var_2 = (short)20491;
signed char var_5 = (signed char)9;
long long int var_6 = -8144309787666074738LL;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned long long int var_10 = 9423984215311264786ULL;
unsigned short var_11 = (unsigned short)52024;
unsigned char var_12 = (unsigned char)37;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
