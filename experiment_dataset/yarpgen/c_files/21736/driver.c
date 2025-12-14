#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16251418445815037356ULL;
short var_2 = (short)-7014;
short var_4 = (short)27319;
signed char var_5 = (signed char)52;
unsigned long long int var_6 = 12112840565391761820ULL;
signed char var_9 = (signed char)82;
int var_11 = 1904307742;
int var_12 = 1428534864;
signed char var_13 = (signed char)-28;
long long int var_16 = -8492044749785522581LL;
int zero = 0;
unsigned char var_17 = (unsigned char)240;
unsigned short var_18 = (unsigned short)32746;
int var_19 = -1080484009;
unsigned short var_20 = (unsigned short)18651;
int var_21 = -654162676;
signed char var_22 = (signed char)113;
signed char var_23 = (signed char)-70;
unsigned char arr_0 [25] [25] ;
_Bool arr_1 [25] ;
int arr_2 [25] ;
short arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)201;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 1955213184;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (short)11126;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
