#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)22;
unsigned long long int var_3 = 6344864023090097614ULL;
unsigned char var_4 = (unsigned char)10;
signed char var_16 = (signed char)20;
int zero = 0;
unsigned long long int var_17 = 17272763816787396767ULL;
unsigned char var_18 = (unsigned char)250;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 11919086621355852290ULL;
_Bool var_21 = (_Bool)0;
long long int var_22 = 3242599596763640848LL;
unsigned long long int var_23 = 6289108022736071334ULL;
_Bool var_24 = (_Bool)0;
unsigned long long int var_25 = 151556562226510652ULL;
int var_26 = 2021730116;
unsigned int arr_0 [22] ;
unsigned int arr_2 [22] ;
signed char arr_4 [22] ;
long long int arr_5 [22] [22] ;
_Bool arr_7 [22] [22] [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 2845388185U : 4025394325U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1496435447U : 3369407985U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (signed char)112;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? -8646585855047977797LL : -520981672445519075LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (_Bool)1 : (_Bool)1;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
