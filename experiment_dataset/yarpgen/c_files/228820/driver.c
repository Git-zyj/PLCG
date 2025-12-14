#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 3294265505210168117LL;
_Bool var_4 = (_Bool)0;
long long int var_6 = -9215906765313547776LL;
int var_9 = 1835972284;
short var_12 = (short)-7813;
unsigned short var_13 = (unsigned short)13857;
short var_15 = (short)23639;
unsigned long long int var_17 = 12390999448542804208ULL;
signed char var_18 = (signed char)10;
unsigned short var_19 = (unsigned short)11241;
int zero = 0;
long long int var_20 = -3224485495910217622LL;
unsigned short var_21 = (unsigned short)31301;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 3138933730U;
long long int var_24 = 5508336343454776467LL;
int arr_0 [24] ;
short arr_1 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -828896744;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (short)-8577;
}

void checksum() {
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
