#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 683810760555881640LL;
unsigned long long int var_2 = 14669839431666438873ULL;
unsigned int var_5 = 1635892850U;
int var_9 = 567877620;
unsigned long long int var_11 = 7240209115472307689ULL;
long long int var_12 = -5497213103279335960LL;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 3899712566U;
unsigned long long int var_16 = 14130950242179143570ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)44779;
int var_19 = 1951422932;
signed char var_20 = (signed char)-46;
int var_21 = 1026672948;
unsigned long long int var_22 = 3645354739335589268ULL;
unsigned char arr_1 [13] [13] ;
unsigned int arr_3 [13] ;
short arr_5 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)13;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 2716724507U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)-5077;
}

void checksum() {
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
