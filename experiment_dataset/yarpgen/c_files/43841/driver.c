#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 8814640963805674093LL;
long long int var_9 = -3800491771369260235LL;
long long int var_10 = -5118011667625264413LL;
long long int var_15 = 2702598933410535799LL;
long long int var_17 = 8035726166836827540LL;
long long int var_19 = 2865787100424312859LL;
int zero = 0;
long long int var_20 = 4603697823766531557LL;
long long int var_21 = -8375332716211349177LL;
long long int var_22 = -5270419657606669833LL;
long long int var_23 = 1196343232033672392LL;
long long int var_24 = 62425814521246654LL;
long long int arr_0 [16] ;
long long int arr_1 [16] [16] ;
long long int arr_3 [16] ;
long long int arr_4 [16] [16] ;
long long int arr_6 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 3799085937176918227LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = -2029958803905384010LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = -3846622292011449651LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = -5626629369783674852LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 3965557053570167949LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
