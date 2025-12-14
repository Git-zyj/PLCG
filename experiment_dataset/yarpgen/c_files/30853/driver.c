#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)111;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 3239217111U;
long long int var_7 = -95702611698553615LL;
unsigned int var_8 = 656520542U;
unsigned short var_9 = (unsigned short)55935;
signed char var_10 = (signed char)45;
int zero = 0;
short var_11 = (short)-32535;
int var_12 = -2034520942;
signed char var_13 = (signed char)-74;
_Bool var_14 = (_Bool)1;
unsigned long long int arr_0 [17] ;
unsigned short arr_2 [17] ;
unsigned short arr_5 [17] [17] [17] [17] ;
long long int arr_7 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 4673584400292872673ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned short)41769;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)38227 : (unsigned short)984;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -3342118671649781724LL : -5555508853162077237LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
