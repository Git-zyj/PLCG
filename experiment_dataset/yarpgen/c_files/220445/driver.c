#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -433635617290190854LL;
unsigned long long int var_3 = 12007700710365734732ULL;
unsigned short var_4 = (unsigned short)62060;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 623325576U;
short var_15 = (short)-8889;
int zero = 0;
short var_17 = (short)25375;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)144;
int var_20 = -767250018;
unsigned char var_21 = (unsigned char)219;
unsigned long long int var_22 = 17042882370327997207ULL;
unsigned short var_23 = (unsigned short)45014;
long long int arr_3 [24] [24] ;
unsigned long long int arr_6 [24] ;
unsigned long long int arr_7 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 77682090109914187LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 4291288323276061782ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 15629883434344759669ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
