#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)212;
signed char var_3 = (signed char)127;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)172;
signed char var_10 = (signed char)-29;
short var_13 = (short)-6391;
int var_15 = -1694172029;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned char var_17 = (unsigned char)100;
unsigned short var_18 = (unsigned short)52757;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
