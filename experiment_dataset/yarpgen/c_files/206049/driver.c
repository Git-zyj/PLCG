#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -402395432;
signed char var_2 = (signed char)76;
unsigned short var_7 = (unsigned short)38254;
int var_8 = 1000921419;
short var_9 = (short)32118;
unsigned long long int var_10 = 10470907042757634010ULL;
short var_11 = (short)10050;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 9914353530726860733ULL;
short var_15 = (short)25652;
long long int var_16 = 6293711436713220036LL;
int var_17 = 292998777;
unsigned short arr_1 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned short)39844;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
