#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10386;
unsigned short var_2 = (unsigned short)44917;
short var_3 = (short)321;
int var_8 = -1013159220;
unsigned char var_14 = (unsigned char)214;
signed char var_16 = (signed char)5;
_Bool var_17 = (_Bool)1;
unsigned int var_19 = 2867757718U;
int zero = 0;
unsigned int var_20 = 2663575370U;
signed char var_21 = (signed char)127;
void init() {
}

void checksum() {
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
