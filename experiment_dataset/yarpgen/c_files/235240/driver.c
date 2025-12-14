#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_9 = (_Bool)1;
unsigned short var_11 = (unsigned short)57974;
unsigned char var_15 = (unsigned char)5;
short var_17 = (short)-16388;
signed char var_19 = (signed char)-111;
int zero = 0;
unsigned long long int var_20 = 7433823364629087500ULL;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)36368;
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
