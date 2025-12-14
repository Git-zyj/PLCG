#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 329883181451012884LL;
long long int var_4 = 713736749366461495LL;
long long int var_6 = -1048161087953534219LL;
long long int var_8 = 393029785505752028LL;
long long int var_9 = 6261138173648241077LL;
long long int var_11 = -6004791796599104160LL;
long long int var_12 = -4314287519762633749LL;
int zero = 0;
long long int var_15 = -8465258472748434115LL;
long long int var_16 = 4321129929572551376LL;
long long int var_17 = -7350380730813779670LL;
long long int var_18 = -7750722786689430532LL;
long long int var_19 = -6153957079347772578LL;
long long int arr_0 [24] ;
long long int arr_5 [25] ;
long long int arr_6 [25] [25] ;
long long int arr_7 [25] [25] ;
long long int arr_4 [18] ;
long long int arr_8 [25] ;
long long int arr_9 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 6823011587480620734LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 1586489260982504916LL : 8744135973516169470LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 5511925261416914074LL : -6568721526131101729LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = -6265263481799897246LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 198298137783903031LL : 3370551495509790222LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? -3895974166137227513LL : -4316569181790741087LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 8081014223763035855LL : -694976671998046569LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
