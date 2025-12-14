#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7649027375183241302LL;
_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)1;
long long int var_5 = -3643361402790521788LL;
unsigned int var_6 = 3743034658U;
long long int var_7 = -5222626166120297461LL;
_Bool var_8 = (_Bool)0;
signed char var_11 = (signed char)-52;
int zero = 0;
unsigned int var_13 = 803473920U;
unsigned long long int var_14 = 9969613916644963522ULL;
signed char var_15 = (signed char)-127;
short var_16 = (short)-28008;
unsigned int var_17 = 2677695115U;
unsigned long long int arr_0 [15] [15] ;
unsigned short arr_1 [15] ;
short arr_2 [15] [15] [15] ;
int arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 17987161670710083282ULL : 4826243815783673558ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)54200 : (unsigned short)26874;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (short)-31353;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1652824911 : -1144599462;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
