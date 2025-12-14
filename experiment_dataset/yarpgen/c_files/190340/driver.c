#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3320551858U;
unsigned short var_2 = (unsigned short)35019;
unsigned long long int var_3 = 18415318096777664182ULL;
_Bool var_9 = (_Bool)0;
long long int var_13 = 5698163496623329326LL;
long long int var_14 = -5833847720268035765LL;
unsigned int var_15 = 4042171590U;
int zero = 0;
unsigned int var_16 = 2772200052U;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)123;
unsigned long long int arr_0 [22] ;
unsigned short arr_1 [22] [22] ;
unsigned int arr_2 [22] [22] ;
int arr_3 [22] [22] ;
unsigned char arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 5688300161065465953ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)1513;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 2491671627U : 628273421U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 740267790 : 572240475;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (unsigned char)138;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
