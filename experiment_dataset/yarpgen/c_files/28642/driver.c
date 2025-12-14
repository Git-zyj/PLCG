#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4229688825497951471ULL;
unsigned short var_1 = (unsigned short)9767;
long long int var_2 = 487590577404101809LL;
unsigned int var_3 = 4034114373U;
unsigned long long int var_5 = 13462466788009849942ULL;
unsigned int var_7 = 751465044U;
unsigned int var_8 = 2988390852U;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 1745622460U;
int zero = 0;
long long int var_12 = -9525483404305309LL;
int var_13 = -1658127451;
_Bool var_14 = (_Bool)1;
long long int var_15 = 6905137061764935308LL;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 16574450758719167884ULL;
unsigned char var_18 = (unsigned char)11;
signed char var_19 = (signed char)80;
unsigned char var_20 = (unsigned char)139;
unsigned long long int var_21 = 7744310276748610574ULL;
unsigned char var_22 = (unsigned char)32;
unsigned int var_23 = 3152808108U;
unsigned long long int var_24 = 4271669365857508665ULL;
unsigned long long int var_25 = 10193271557022545655ULL;
int var_26 = 1963159444;
long long int var_27 = 3582271954831361758LL;
_Bool var_28 = (_Bool)1;
unsigned char arr_0 [20] ;
unsigned int arr_1 [20] ;
_Bool arr_2 [16] ;
signed char arr_3 [16] ;
unsigned char arr_4 [16] ;
_Bool arr_7 [16] [16] ;
unsigned int arr_10 [16] [16] ;
unsigned long long int arr_11 [16] ;
unsigned char arr_14 [16] [16] ;
unsigned char arr_15 [16] [16] ;
unsigned int arr_16 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned char)239;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 2537764523U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (signed char)-33;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)142 : (unsigned char)89;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? 886458131U : 1529862003U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 8224034575101315703ULL : 17545536878223257034ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned char)28;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned char)151;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 1885923869U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
