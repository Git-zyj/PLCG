#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7389296897076033707LL;
long long int var_4 = 7347282955378626281LL;
unsigned int var_6 = 3422111773U;
signed char var_9 = (signed char)32;
signed char var_11 = (signed char)12;
int zero = 0;
signed char var_17 = (signed char)-126;
long long int var_18 = -6181679355864666908LL;
int var_19 = 525901967;
long long int var_20 = -9143285997441485641LL;
int arr_0 [18] [18] ;
long long int arr_3 [18] ;
long long int arr_5 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = -1814674688;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = -2039920179836622629LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -6694826234500294921LL : 4970589729520473938LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
