#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57303;
long long int var_2 = -4896224335220625976LL;
_Bool var_3 = (_Bool)0;
unsigned short var_10 = (unsigned short)24293;
long long int var_12 = 2319483357125413540LL;
unsigned short var_14 = (unsigned short)13938;
int zero = 0;
long long int var_17 = -2673368732184850106LL;
signed char var_18 = (signed char)-83;
short var_19 = (short)243;
signed char var_20 = (signed char)-123;
unsigned long long int var_21 = 10564268694763591395ULL;
_Bool var_22 = (_Bool)0;
short var_23 = (short)28647;
int var_24 = 180070863;
unsigned int arr_5 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 1052448234U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
