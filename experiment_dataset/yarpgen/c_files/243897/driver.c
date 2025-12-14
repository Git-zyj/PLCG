#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36099;
unsigned short var_1 = (unsigned short)30610;
unsigned long long int var_2 = 16652236791038720201ULL;
unsigned int var_3 = 2895349037U;
unsigned int var_5 = 693202039U;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)5612;
int var_8 = -101392099;
int var_11 = 35334562;
int zero = 0;
unsigned char var_12 = (unsigned char)6;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 2463650852U;
long long int var_16 = 7781227487501510367LL;
unsigned char var_17 = (unsigned char)187;
unsigned char var_18 = (unsigned char)178;
unsigned long long int var_19 = 5578839804637828085ULL;
unsigned long long int arr_0 [17] [17] ;
unsigned char arr_1 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 7626257145808575389ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)75 : (unsigned char)42;
}

void checksum() {
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
