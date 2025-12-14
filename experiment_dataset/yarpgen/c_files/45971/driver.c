#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8055131818395616477LL;
unsigned short var_5 = (unsigned short)45640;
unsigned int var_9 = 3267113897U;
long long int var_10 = -6352800175314097158LL;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)135;
int zero = 0;
long long int var_14 = 686460595557146936LL;
long long int var_15 = -228869995496945579LL;
_Bool var_16 = (_Bool)0;
int var_17 = 1653312894;
_Bool var_18 = (_Bool)0;
long long int arr_2 [22] [22] ;
unsigned char arr_3 [22] [22] ;
unsigned long long int arr_5 [22] ;
unsigned long long int arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 2204656980633389540LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)229 : (unsigned char)97;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 15089091931805488572ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 6065731897726619679ULL : 7709389058901234129ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
