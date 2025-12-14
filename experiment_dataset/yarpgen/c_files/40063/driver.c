#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2584222908943741002LL;
unsigned int var_1 = 387173807U;
int var_2 = -1105362867;
_Bool var_4 = (_Bool)1;
unsigned long long int var_8 = 9949632450293017308ULL;
int zero = 0;
unsigned long long int var_11 = 8373383965212809498ULL;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)65343;
unsigned long long int var_14 = 8217784129835373287ULL;
unsigned long long int var_15 = 7149994459026447421ULL;
unsigned long long int var_16 = 11513619763578233054ULL;
unsigned long long int arr_0 [11] ;
unsigned long long int arr_6 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 697607595111517594ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 345248251832179435ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
