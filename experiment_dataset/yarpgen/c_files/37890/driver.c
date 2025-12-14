#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)46;
short var_3 = (short)18015;
unsigned short var_4 = (unsigned short)45886;
unsigned long long int var_5 = 2011772236173605454ULL;
long long int var_7 = -9098011635164141853LL;
unsigned short var_9 = (unsigned short)62826;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-63;
int zero = 0;
unsigned short var_20 = (unsigned short)24318;
long long int var_21 = 997192836050984154LL;
signed char var_22 = (signed char)56;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
