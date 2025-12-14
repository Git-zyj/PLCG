#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14170556992378819210ULL;
long long int var_2 = 2541379184873002408LL;
long long int var_3 = -4769660692722273655LL;
long long int var_5 = 3748159879704225894LL;
unsigned long long int var_6 = 14110065949581168540ULL;
long long int var_8 = -1207676733081703007LL;
long long int var_9 = 1238245974370749732LL;
unsigned long long int var_10 = 17644392364423403574ULL;
long long int var_11 = 3400918026786881011LL;
unsigned long long int var_12 = 8577238467613552935ULL;
int zero = 0;
long long int var_14 = 1981392601876830468LL;
long long int var_15 = 5336314197369234803LL;
long long int var_16 = -931394869715466668LL;
long long int var_17 = -3443177573487886839LL;
unsigned long long int var_18 = 9985104162232923042ULL;
unsigned long long int var_19 = 515403498152459087ULL;
long long int var_20 = -4864780163655064674LL;
unsigned long long int var_21 = 13932724737104705639ULL;
long long int arr_1 [10] ;
unsigned long long int arr_2 [10] [10] ;
unsigned long long int arr_5 [10] [10] [10] ;
long long int arr_6 [10] [10] [10] ;
long long int arr_7 [10] ;
unsigned long long int arr_8 [10] [10] [10] [10] ;
long long int arr_9 [10] [10] [10] ;
unsigned long long int arr_10 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -1497934759748118978LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 12499822360848070049ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 12316217090099004086ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -2217181431324360717LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = 4370732982826099567LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 217306968320899124ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = -4086761133412518324LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = 16889837803108407640ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
