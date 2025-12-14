#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)42;
unsigned long long int var_1 = 6690670300205829991ULL;
int var_5 = 1478646212;
unsigned int var_6 = 4199994950U;
long long int var_7 = -7906701849431676456LL;
signed char var_9 = (signed char)-25;
int zero = 0;
long long int var_10 = 8228575106164476705LL;
unsigned char var_11 = (unsigned char)67;
unsigned char var_12 = (unsigned char)83;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 4051179277U;
unsigned long long int var_15 = 9133098736659965414ULL;
unsigned int var_16 = 3589965909U;
int var_17 = 479734824;
long long int arr_1 [22] ;
unsigned int arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = -4849183234226373372LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 396750505U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
