#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14093259566058008629ULL;
unsigned short var_2 = (unsigned short)17035;
short var_4 = (short)27495;
_Bool var_5 = (_Bool)0;
unsigned long long int var_7 = 13083446266688656420ULL;
unsigned int var_8 = 3551110151U;
_Bool var_9 = (_Bool)1;
short var_10 = (short)25506;
int zero = 0;
unsigned long long int var_11 = 13971404443516917711ULL;
_Bool var_12 = (_Bool)0;
long long int var_13 = 7155838559849103276LL;
_Bool var_14 = (_Bool)0;
int var_15 = 2073470753;
unsigned int var_16 = 3679826757U;
unsigned int var_17 = 1774916148U;
unsigned short var_18 = (unsigned short)14850;
unsigned long long int var_19 = 10476300607219003185ULL;
unsigned long long int arr_0 [17] ;
short arr_1 [17] ;
short arr_2 [17] ;
unsigned int arr_3 [17] [17] ;
unsigned long long int arr_6 [17] [17] [17] [17] ;
short arr_8 [17] [17] [17] [17] ;
unsigned long long int arr_10 [17] [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 8218193754559231411ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (short)-9697;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (short)9471;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = 2702545027U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 1442208575538161078ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)30889 : (short)9028;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = 17055634306441118343ULL;
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
