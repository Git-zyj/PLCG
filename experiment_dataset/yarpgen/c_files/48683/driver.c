#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10990;
unsigned int var_3 = 3943991908U;
unsigned short var_7 = (unsigned short)51341;
unsigned long long int var_8 = 13670360747311148739ULL;
long long int var_13 = -8327745901371467159LL;
short var_17 = (short)-22613;
int zero = 0;
unsigned short var_20 = (unsigned short)15006;
unsigned long long int var_21 = 700174215493140863ULL;
unsigned long long int var_22 = 10732867115737930743ULL;
signed char var_23 = (signed char)60;
unsigned long long int var_24 = 5376223359391216049ULL;
signed char var_25 = (signed char)-27;
short var_26 = (short)4497;
unsigned long long int var_27 = 17229786327140534999ULL;
_Bool arr_0 [13] ;
short arr_1 [13] [13] ;
unsigned long long int arr_2 [21] [21] ;
long long int arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-19983;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 7247394671431849828ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = -8470206130181628042LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
