#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2755112917U;
unsigned short var_4 = (unsigned short)28404;
long long int var_12 = -3724747311019417368LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned char var_17 = (unsigned char)170;
unsigned long long int var_18 = 7936737309110152473ULL;
unsigned char var_19 = (unsigned char)202;
int var_20 = -195249721;
long long int var_21 = -4339685823536382724LL;
unsigned char var_22 = (unsigned char)15;
signed char var_23 = (signed char)50;
unsigned char var_24 = (unsigned char)187;
unsigned long long int arr_0 [19] [19] ;
short arr_3 [19] [19] [19] ;
signed char arr_4 [19] ;
signed char arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 1243932798237722939ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)-12497;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)-19 : (signed char)-8;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (signed char)-108;
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
