#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-48;
int var_1 = 1172625922;
_Bool var_2 = (_Bool)0;
int var_3 = 52901736;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)126;
signed char var_6 = (signed char)64;
signed char var_7 = (signed char)38;
unsigned char var_9 = (unsigned char)224;
signed char var_10 = (signed char)9;
long long int var_11 = 8515655236625637703LL;
int zero = 0;
unsigned long long int var_13 = 9452036650405157176ULL;
long long int var_14 = 6717036124619897883LL;
unsigned short var_15 = (unsigned short)54410;
long long int var_16 = -2102670213344887610LL;
short var_17 = (short)28892;
int var_18 = 1037061882;
signed char var_19 = (signed char)123;
unsigned short var_20 = (unsigned short)28328;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 6188686293831134823ULL;
unsigned char var_23 = (unsigned char)95;
long long int var_24 = -7894351123861804505LL;
unsigned int arr_2 [17] [17] ;
_Bool arr_4 [17] [17] [17] ;
int arr_5 [17] [17] [17] ;
short arr_6 [17] [17] [17] ;
short arr_7 [17] [17] [17] ;
unsigned short arr_9 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 347345141U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -1520780894;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)25128;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)17910;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned short)58689;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
