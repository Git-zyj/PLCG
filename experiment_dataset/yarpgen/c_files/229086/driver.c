#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2092414602U;
_Bool var_3 = (_Bool)1;
unsigned char var_5 = (unsigned char)137;
unsigned char var_7 = (unsigned char)67;
long long int var_9 = -8093258621831189645LL;
int var_12 = -740827983;
short var_17 = (short)9810;
int zero = 0;
signed char var_18 = (signed char)71;
long long int var_19 = 6007384830214406537LL;
unsigned char var_20 = (unsigned char)111;
int var_21 = 1397405989;
signed char var_22 = (signed char)-39;
signed char var_23 = (signed char)-39;
int arr_0 [23] ;
int arr_1 [23] [23] ;
unsigned long long int arr_2 [23] ;
signed char arr_4 [23] [23] [23] ;
long long int arr_6 [23] ;
signed char arr_7 [23] ;
unsigned long long int arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 1155423743;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = -1120999191;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 15029614285512907365ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-70;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = -9040307286537089518LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (signed char)68;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 8275612499251688815ULL : 12480591456874413094ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
