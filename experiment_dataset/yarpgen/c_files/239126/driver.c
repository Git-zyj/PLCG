#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33724;
short var_7 = (short)25894;
int var_12 = -40467312;
signed char var_13 = (signed char)-12;
long long int var_16 = -8575064275895454612LL;
int zero = 0;
unsigned int var_18 = 2272654984U;
unsigned int var_19 = 510565287U;
_Bool var_20 = (_Bool)1;
long long int var_21 = 3384917962751381536LL;
signed char var_22 = (signed char)103;
long long int arr_0 [14] ;
_Bool arr_2 [14] ;
int arr_3 [14] [14] [14] ;
unsigned int arr_4 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 4557787040273411985LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1286189863;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 3307093708U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
