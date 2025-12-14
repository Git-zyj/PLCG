#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6255445858667931751LL;
long long int var_2 = -6720752694468754322LL;
long long int var_4 = -8021568861745495880LL;
long long int var_5 = -3733818932002262075LL;
long long int var_6 = -5948744944319485555LL;
int zero = 0;
long long int var_11 = -1246299333952642686LL;
long long int var_12 = -8437738428209066237LL;
long long int var_13 = 500691063378604993LL;
long long int arr_2 [14] [14] ;
long long int arr_5 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 5247004731146773020LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = -3607301827111064610LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
