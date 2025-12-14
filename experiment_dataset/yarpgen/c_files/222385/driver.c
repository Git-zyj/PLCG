#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -151856127;
signed char var_3 = (signed char)-104;
signed char var_8 = (signed char)117;
unsigned int var_9 = 3539272010U;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)118;
signed char var_12 = (signed char)60;
signed char var_13 = (signed char)42;
int var_14 = -1222981763;
unsigned long long int var_16 = 7807341656774175068ULL;
long long int var_17 = -983253849998694730LL;
int zero = 0;
int var_18 = 1784150421;
long long int var_19 = 6408140423421125452LL;
long long int var_20 = -3941621927990843640LL;
unsigned long long int var_21 = 5860627571741460945ULL;
unsigned char arr_9 [21] [21] [21] [21] ;
unsigned char arr_10 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned char)243;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (unsigned char)164;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
