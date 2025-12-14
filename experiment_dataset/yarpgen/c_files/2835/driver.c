#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7677420441164984319LL;
short var_2 = (short)25702;
int var_3 = -895865170;
long long int var_5 = 3817983473577691795LL;
long long int var_6 = 6609237704184561636LL;
long long int var_7 = -4948216217271270621LL;
int var_8 = 1911950320;
long long int var_9 = -375228520454646718LL;
int var_10 = -244468138;
int zero = 0;
long long int var_15 = -2195972930220744854LL;
short var_16 = (short)30420;
int var_17 = 1417857800;
short var_18 = (short)-19682;
long long int var_19 = -6245881083021914375LL;
short var_20 = (short)-4267;
int var_21 = -1013932647;
int var_22 = 718832136;
long long int arr_1 [22] ;
short arr_2 [22] ;
long long int arr_4 [22] [22] [22] ;
int arr_6 [22] ;
long long int arr_7 [22] [22] [22] [22] ;
int arr_10 [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 8653167906522097350LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (short)-14293;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 7223335447669245605LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = -810706985;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 1646514155406409179LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 2088324447;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
