#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -338920688;
long long int var_3 = 8602043827773525422LL;
long long int var_6 = -2545008157608126070LL;
int var_8 = 1442169908;
int var_9 = -1179425624;
long long int var_11 = -4041825222877986957LL;
int var_12 = 1158758295;
unsigned int var_13 = 4222992909U;
unsigned int var_14 = 2012274975U;
int var_16 = -1210176786;
int zero = 0;
long long int var_17 = -7023696444718037674LL;
unsigned int var_18 = 3457169406U;
int var_19 = -542947638;
unsigned int var_20 = 312159316U;
int var_21 = -377505913;
int var_22 = -416440694;
unsigned int var_23 = 4238029853U;
int var_24 = 593349254;
unsigned int var_25 = 594630900U;
int var_26 = 1639265409;
int var_27 = -1459466359;
int var_28 = -1826592154;
unsigned int var_29 = 1022055482U;
int var_30 = -1441128204;
long long int var_31 = 3932249708602652691LL;
unsigned int var_32 = 1480473126U;
long long int var_33 = 1192361364709076411LL;
int var_34 = 809294799;
int var_35 = -937206338;
unsigned int var_36 = 3175816540U;
int var_37 = 588103205;
int arr_0 [17] ;
int arr_1 [17] ;
int arr_2 [17] [17] ;
int arr_5 [18] ;
unsigned int arr_6 [18] ;
unsigned int arr_7 [18] ;
long long int arr_11 [17] [17] ;
unsigned int arr_13 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 1809573138;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = -1746416252;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = -295684642;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 1554791864;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = 3913029536U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = 3884466633U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_11 [i_0] [i_1] = 1568621258481027680LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_13 [i_0] [i_1] = 460651282U;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
