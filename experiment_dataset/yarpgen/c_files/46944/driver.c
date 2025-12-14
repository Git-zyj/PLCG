#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4058603904617791218LL;
long long int var_2 = -3031992826705032886LL;
long long int var_3 = -5103690329914915007LL;
long long int var_5 = -5691368195782074456LL;
long long int var_6 = 5679788943880073982LL;
long long int var_8 = 5268408621044615084LL;
unsigned short var_9 = (unsigned short)27640;
long long int var_10 = 8352394928585536732LL;
unsigned short var_11 = (unsigned short)51128;
int zero = 0;
long long int var_12 = 6271538650530850850LL;
unsigned short var_13 = (unsigned short)36415;
long long int var_14 = -6408230413291770460LL;
long long int var_15 = 1580251305902736336LL;
long long int var_16 = -8517221178673810206LL;
long long int var_17 = 1422030196047761912LL;
long long int var_18 = -5659555798673766713LL;
long long int var_19 = -3131229777995728227LL;
long long int var_20 = 7712251244033233963LL;
long long int var_21 = -6479106785331392613LL;
unsigned short var_22 = (unsigned short)2288;
long long int var_23 = 4587067501344811656LL;
long long int var_24 = -6405019390294948022LL;
long long int var_25 = -8933599329093899217LL;
long long int var_26 = 5565326221413664877LL;
long long int var_27 = -1895627867347470486LL;
unsigned short arr_0 [25] ;
long long int arr_1 [25] ;
long long int arr_2 [25] [25] ;
long long int arr_4 [10] [10] ;
unsigned short arr_5 [10] [10] ;
unsigned short arr_7 [13] ;
long long int arr_8 [13] ;
long long int arr_9 [16] ;
long long int arr_10 [16] ;
long long int arr_11 [16] [16] ;
unsigned short arr_14 [10] ;
long long int arr_16 [10] ;
unsigned short arr_17 [10] ;
long long int arr_3 [25] ;
unsigned short arr_12 [16] ;
long long int arr_15 [10] [10] ;
long long int arr_19 [10] [10] ;
unsigned short arr_20 [10] [10] ;
unsigned short arr_23 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned short)62718;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 1010682883396532632LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = -1050342566867623438LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = -7670005766533944581LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)55021;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (unsigned short)21770;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = 5860850136634757109LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = -3857630691278044806LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = -2561279977893857560LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_11 [i_0] [i_1] = -4550579281068970865LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = (unsigned short)59021;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_16 [i_0] = -8255426323589675955LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_17 [i_0] = (unsigned short)65250;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -4907682857651142449LL : 6764387934104334572LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned short)44208 : (unsigned short)37650;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_15 [i_0] [i_1] = -5772240833453573045LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_19 [i_0] [i_1] = 226710882602090574LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_20 [i_0] [i_1] = (unsigned short)39618;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (unsigned short)17302 : (unsigned short)43197;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
