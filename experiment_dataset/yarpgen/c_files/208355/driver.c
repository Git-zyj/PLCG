#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1454236331;
long long int var_3 = -852953102604733144LL;
int var_4 = -1678222161;
int var_6 = -1694905147;
signed char var_8 = (signed char)62;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 357466977U;
int zero = 0;
_Bool var_16 = (_Bool)1;
int var_17 = -1878778361;
signed char var_18 = (signed char)-112;
unsigned int var_19 = 2466673889U;
long long int var_20 = -8956368515161770974LL;
long long int var_21 = -7677233068253562212LL;
_Bool var_22 = (_Bool)0;
signed char arr_0 [10] ;
unsigned short arr_1 [10] [10] ;
unsigned int arr_3 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (signed char)-69;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)3311;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 44263295U;
}

void checksum() {
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
