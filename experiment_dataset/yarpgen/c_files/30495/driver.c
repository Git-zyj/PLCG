#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 237191946;
unsigned long long int var_2 = 2205126131207880835ULL;
unsigned int var_3 = 800595739U;
unsigned long long int var_5 = 14687199147327323653ULL;
int var_6 = 1439545380;
int var_8 = 1327534638;
signed char var_9 = (signed char)109;
unsigned char var_10 = (unsigned char)70;
long long int var_12 = -5579755822025057910LL;
int var_13 = -108296216;
short var_14 = (short)-13524;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 8651079218013564027ULL;
unsigned long long int var_17 = 8271529619882002326ULL;
unsigned long long int var_18 = 13542357803226002035ULL;
short var_19 = (short)3012;
short var_20 = (short)-474;
long long int arr_0 [25] ;
signed char arr_2 [25] ;
signed char arr_6 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 1338912617776361233LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)-56;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)-74 : (signed char)-11;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
