#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 3582880093681617736LL;
long long int var_4 = 8870876428704233653LL;
long long int var_7 = 2539857470539074082LL;
long long int var_8 = 6563783835139286251LL;
long long int var_11 = 8785137472254075155LL;
long long int var_12 = 9209846271951005954LL;
long long int var_16 = -1001931964742699029LL;
long long int var_18 = 2718617175726854420LL;
long long int var_19 = -3233986570536700120LL;
int zero = 0;
long long int var_20 = 6614429723192695676LL;
long long int var_21 = 7924114062132774807LL;
long long int var_22 = 2464037677925768733LL;
long long int var_23 = -5006318303679308450LL;
long long int arr_0 [10] ;
long long int arr_1 [10] ;
long long int arr_2 [10] [10] ;
long long int arr_3 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 1750245359125047535LL : -8624491100697481267LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -4148303383421353851LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? -8828542504310821020LL : -6905219422511131970LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 2733782115315358364LL : -1896289326110460396LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
