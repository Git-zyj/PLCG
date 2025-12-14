#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1592528275361159408ULL;
unsigned long long int var_3 = 17201545168424275854ULL;
long long int var_4 = 815146610977456960LL;
long long int var_8 = -7467792052974020498LL;
unsigned long long int var_9 = 16374404455601428342ULL;
unsigned int var_11 = 1844999456U;
unsigned long long int var_12 = 11729928513339807941ULL;
signed char var_13 = (signed char)84;
signed char var_15 = (signed char)-114;
int zero = 0;
unsigned int var_19 = 3143616372U;
unsigned char var_20 = (unsigned char)42;
unsigned long long int var_21 = 6854927486247616977ULL;
long long int var_22 = 6109712146245137887LL;
long long int var_23 = 5426531619948917260LL;
unsigned char var_24 = (unsigned char)121;
long long int var_25 = 1887789271881205178LL;
signed char var_26 = (signed char)-55;
unsigned int var_27 = 851664077U;
unsigned long long int arr_0 [15] [15] ;
long long int arr_2 [24] [24] ;
unsigned int arr_3 [24] ;
signed char arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = 762329475455284490ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = -4185166755319055293LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 3066582859U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (signed char)-11;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
