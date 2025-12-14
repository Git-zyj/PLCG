#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8386;
long long int var_1 = 9003105486776755360LL;
long long int var_4 = 8666744684646609328LL;
long long int var_5 = 8632622096046000466LL;
unsigned short var_7 = (unsigned short)65044;
long long int var_9 = -3520034809098630576LL;
int zero = 0;
long long int var_11 = 1041324905708954973LL;
long long int var_12 = -7980147851772726066LL;
unsigned short var_13 = (unsigned short)25979;
unsigned short var_14 = (unsigned short)39284;
_Bool var_15 = (_Bool)1;
long long int var_16 = -2797496126605861481LL;
long long int var_17 = -2237916384704237497LL;
long long int var_18 = -4404406019438803577LL;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)31;
long long int arr_4 [25] [25] ;
long long int arr_5 [25] ;
long long int arr_6 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = -5951902799204445256LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = -6159419604527851473LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = -4360372635190597811LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
