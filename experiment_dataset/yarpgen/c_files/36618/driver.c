#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3887185795129639328LL;
signed char var_3 = (signed char)113;
int var_5 = 41677856;
signed char var_7 = (signed char)125;
int var_8 = -1727441525;
int var_9 = -1110744498;
int var_10 = -1889063493;
int var_11 = -117478637;
int var_14 = 1782768439;
int var_15 = -137815753;
int zero = 0;
long long int var_16 = -828427328626538797LL;
int var_17 = -1996299007;
long long int var_18 = 4767670517311636405LL;
signed char var_19 = (signed char)-93;
long long int var_20 = -4651409282871924724LL;
signed char arr_1 [12] [12] ;
signed char arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-76;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (signed char)-34;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
