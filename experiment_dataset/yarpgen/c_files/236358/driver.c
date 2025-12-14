#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8506587885626105886LL;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
long long int var_6 = -4388455967639843556LL;
long long int var_11 = 2207919595364422952LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_17 = 8557509862967799443LL;
long long int var_18 = 8143098582298434426LL;
long long int var_19 = 1503511131125664107LL;
long long int var_20 = 1451482423207764894LL;
long long int var_21 = -972167703007668032LL;
_Bool var_22 = (_Bool)1;
long long int var_23 = 7581340122333998405LL;
long long int var_24 = 4067632966745334219LL;
long long int arr_0 [18] [18] ;
long long int arr_1 [18] [18] ;
_Bool arr_5 [18] [18] [18] [18] ;
long long int arr_7 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 469275999699958965LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 5211344747519755360LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -1136388457569385967LL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
