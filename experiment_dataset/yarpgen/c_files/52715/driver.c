#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4941592182404054072ULL;
unsigned long long int var_1 = 6253289352190490383ULL;
short var_2 = (short)-14929;
unsigned short var_3 = (unsigned short)17913;
unsigned short var_4 = (unsigned short)18398;
short var_5 = (short)-19115;
unsigned long long int var_7 = 9098257735334854429ULL;
long long int var_8 = -8720258102972273925LL;
unsigned int var_10 = 2060771802U;
int var_11 = -1292620148;
unsigned int var_13 = 210841695U;
short var_14 = (short)-28539;
unsigned long long int var_15 = 8833712853440068391ULL;
unsigned char var_16 = (unsigned char)247;
int zero = 0;
unsigned int var_17 = 3278523414U;
int var_18 = -1187964315;
unsigned long long int var_19 = 9241796441485979294ULL;
short var_20 = (short)9823;
int var_21 = 1823373684;
short var_22 = (short)1483;
short var_23 = (short)12912;
int var_24 = -165473010;
unsigned short arr_0 [10] ;
unsigned long long int arr_2 [10] ;
short arr_5 [10] ;
long long int arr_6 [10] [10] [10] ;
short arr_7 [10] [10] [10] [10] ;
long long int arr_9 [10] [10] [10] [10] [10] ;
int arr_12 [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned short)57979;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 10195221800399567202ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (short)29382;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 6533076186522080950LL : 1496673475146891526LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)27888 : (short)-24445;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = -6198502383705961955LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 2107638867 : -1321997571;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
