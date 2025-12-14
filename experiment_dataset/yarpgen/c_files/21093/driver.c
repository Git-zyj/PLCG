#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8375474144884077767LL;
long long int var_1 = 6657092261351025016LL;
long long int var_3 = -8416340779450210617LL;
long long int var_4 = -2427296107326871097LL;
long long int var_5 = -2413928868879031996LL;
long long int var_8 = 7103655511020899891LL;
long long int var_10 = -823436553005596223LL;
long long int var_11 = 7167365573793705977LL;
long long int var_12 = -5283407263313237985LL;
long long int var_13 = 1743188215084911866LL;
long long int var_14 = -1981314346607927654LL;
int zero = 0;
long long int var_16 = -549820852515936055LL;
long long int var_17 = -9209623501883219847LL;
long long int var_18 = 6207064831123684437LL;
long long int var_19 = -3891473104334142876LL;
long long int var_20 = -4601004306415995126LL;
long long int var_21 = -3333026601305474872LL;
long long int var_22 = -6522620427134254317LL;
long long int var_23 = 5097476616789788526LL;
long long int var_24 = -3740988333476440778LL;
long long int var_25 = 6559359887002583123LL;
long long int var_26 = -7308954036308491314LL;
long long int var_27 = -3443169969700714669LL;
long long int arr_1 [17] ;
long long int arr_3 [17] ;
long long int arr_4 [17] ;
long long int arr_9 [17] [17] [17] ;
long long int arr_12 [11] [11] ;
long long int arr_18 [10] [10] [10] ;
long long int arr_21 [10] [10] [10] [10] ;
long long int arr_6 [17] ;
long long int arr_7 [17] [17] ;
long long int arr_10 [17] [17] [17] [17] [17] ;
long long int arr_22 [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = -541109933110171007LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 604903034406872909LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 469374286260219498LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 3441641303113763057LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_12 [i_0] [i_1] = 2807346049379457630LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = -8585658628823840554LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = -5212354303449502237LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 8188163258898395108LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = -216173273315959229LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = -1659653348519559128LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -2747822959527591307LL : -3482233483089121997LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
