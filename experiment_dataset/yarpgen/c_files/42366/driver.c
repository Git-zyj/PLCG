#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1110717100;
unsigned int var_1 = 4242407908U;
unsigned char var_2 = (unsigned char)214;
int var_3 = 1714191461;
unsigned long long int var_5 = 861658297809626489ULL;
int var_7 = 1522877243;
short var_10 = (short)-19518;
long long int var_13 = 7512716310022309089LL;
int zero = 0;
short var_15 = (short)-31540;
int var_16 = -1611573866;
unsigned int var_17 = 2336830160U;
long long int var_18 = 2067963902554353957LL;
int var_19 = -267383748;
unsigned int var_20 = 3766837175U;
long long int var_21 = -1807971871459229169LL;
long long int var_22 = 2167354148629134900LL;
short arr_0 [17] ;
short arr_1 [17] [17] ;
int arr_6 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)-11052 : (short)-29352;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-5171;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? -827151335 : 351452983;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
