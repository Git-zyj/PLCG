#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_5 = (signed char)-50;
int var_7 = 779762751;
signed char var_8 = (signed char)-65;
int var_9 = -1127492981;
long long int var_11 = 3796960975685752697LL;
long long int var_13 = -9204161198621082591LL;
int zero = 0;
signed char var_15 = (signed char)104;
long long int var_16 = -6296752686327041674LL;
int var_17 = 186761588;
signed char var_18 = (signed char)-8;
unsigned long long int arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 8581777232068782218ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
