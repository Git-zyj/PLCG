#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2264766361605674925LL;
long long int var_1 = 2974653446159535691LL;
long long int var_3 = -343750632312554882LL;
long long int var_8 = 6401552646289310423LL;
long long int var_10 = -427962851508899513LL;
long long int var_11 = 2588254384264353994LL;
long long int var_14 = 6813680175928994319LL;
long long int var_15 = 152944622231034816LL;
int zero = 0;
long long int var_17 = 8646893341159018170LL;
long long int var_18 = 2108354013958668227LL;
long long int var_19 = -4061330719322702656LL;
long long int var_20 = 3061983650853163271LL;
long long int var_21 = -4923872561729880522LL;
long long int arr_4 [13] [13] ;
long long int arr_5 [13] ;
long long int arr_9 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = -5629364229975088479LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = 7286923891018157747LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? -7430995439121312954LL : -5179187295168711530LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
