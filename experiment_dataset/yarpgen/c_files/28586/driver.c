#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7809124906239435267ULL;
signed char var_4 = (signed char)90;
unsigned short var_6 = (unsigned short)14746;
short var_7 = (short)16486;
unsigned char var_8 = (unsigned char)149;
int var_9 = -890829958;
unsigned short var_12 = (unsigned short)57799;
int zero = 0;
unsigned char var_13 = (unsigned char)62;
int var_14 = -570388639;
long long int var_15 = -4694600998764928871LL;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
