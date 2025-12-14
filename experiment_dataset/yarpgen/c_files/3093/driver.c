#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7818;
unsigned int var_1 = 2631910192U;
unsigned char var_2 = (unsigned char)193;
int var_5 = -290275524;
long long int var_6 = 154302851238639326LL;
long long int var_8 = -2536147982757123740LL;
unsigned long long int var_9 = 5877045741526318816ULL;
long long int var_10 = -2657350761786992073LL;
int zero = 0;
unsigned int var_11 = 4268609113U;
unsigned long long int var_12 = 6766886580595840778ULL;
long long int var_13 = 4073598852928332467LL;
unsigned short var_14 = (unsigned short)44594;
int var_15 = 668488443;
unsigned long long int var_16 = 860844492200584419ULL;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 3944319742925079336ULL;
long long int var_19 = -4970465434157603038LL;
unsigned long long int arr_0 [10] [10] ;
int arr_1 [10] ;
int arr_2 [21] ;
unsigned int arr_3 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 7451009508178082530ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -1896150826;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = -1142085729;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = 2958321950U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
