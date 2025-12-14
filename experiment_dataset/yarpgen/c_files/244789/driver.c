#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6914606684237083878ULL;
signed char var_3 = (signed char)-104;
unsigned char var_4 = (unsigned char)82;
long long int var_5 = 7328030777191575807LL;
signed char var_6 = (signed char)-5;
unsigned int var_7 = 862315788U;
int var_8 = -2064730971;
unsigned short var_9 = (unsigned short)30129;
signed char var_10 = (signed char)-29;
_Bool var_12 = (_Bool)1;
unsigned short var_14 = (unsigned short)50393;
long long int var_16 = 6719624825957057793LL;
int zero = 0;
short var_20 = (short)-18775;
signed char var_21 = (signed char)117;
unsigned char var_22 = (unsigned char)61;
short var_23 = (short)-15053;
signed char var_24 = (signed char)107;
_Bool var_25 = (_Bool)0;
unsigned long long int arr_0 [17] ;
unsigned long long int arr_3 [17] ;
short arr_4 [17] [17] ;
short arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 4730022129879804419ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 18380449058880372477ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (short)21983;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (short)-9344;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
