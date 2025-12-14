#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54614;
long long int var_1 = -1568109273351701271LL;
_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)-9;
long long int var_7 = -5678673235296775120LL;
unsigned long long int var_8 = 6033694877878047769ULL;
signed char var_10 = (signed char)-2;
signed char var_11 = (signed char)-15;
int zero = 0;
unsigned long long int var_13 = 10108480459277962179ULL;
int var_14 = 1266699569;
short var_15 = (short)-8736;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
