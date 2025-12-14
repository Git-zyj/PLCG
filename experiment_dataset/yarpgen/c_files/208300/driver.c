#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4190530963399002023LL;
long long int var_2 = 6260120944560867962LL;
long long int var_3 = -6745026170188175214LL;
int var_5 = -2011558646;
long long int var_6 = 1360699901178988050LL;
_Bool var_8 = (_Bool)1;
signed char var_13 = (signed char)-69;
long long int var_15 = -5251385538570323932LL;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-4;
signed char var_18 = (signed char)90;
int zero = 0;
unsigned long long int var_19 = 2261380113245308639ULL;
signed char var_20 = (signed char)18;
long long int var_21 = -5988395817510113389LL;
_Bool var_22 = (_Bool)1;
long long int var_23 = 6346038703537821659LL;
long long int var_24 = 9045632486718412670LL;
long long int var_25 = -6409700010431736700LL;
_Bool var_26 = (_Bool)1;
long long int var_27 = 6288796483209587604LL;
_Bool var_28 = (_Bool)0;
_Bool var_29 = (_Bool)0;
signed char var_30 = (signed char)58;
long long int arr_1 [17] ;
long long int arr_2 [17] ;
unsigned long long int arr_3 [17] ;
unsigned short arr_4 [17] [17] [17] ;
_Bool arr_5 [17] ;
unsigned long long int arr_7 [17] [17] [17] [17] ;
unsigned long long int arr_9 [17] [17] [17] [17] ;
_Bool arr_10 [17] [17] [17] [17] [17] [17] ;
int arr_13 [25] ;
_Bool arr_14 [25] ;
_Bool arr_15 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = -2376577011937211010LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 4430585159673604768LL : 6190239470486341564LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 750511348466780947ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)21429;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 17606254891194129305ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 10261345559986486593ULL : 14243316077737381220ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = 1719983455;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_15 [i_0] = (_Bool)1;
}

void checksum() {
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
    hash(&seed, var_29);
    hash(&seed, var_30);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
