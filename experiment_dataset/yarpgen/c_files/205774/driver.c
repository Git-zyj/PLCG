#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)7788;
short var_3 = (short)9493;
signed char var_4 = (signed char)11;
short var_5 = (short)17391;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)16274;
short var_10 = (short)26064;
long long int var_11 = -1356314604836181436LL;
signed char var_12 = (signed char)85;
int zero = 0;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)19;
int var_16 = -1877025470;
long long int var_17 = -5946671801059499351LL;
unsigned char var_18 = (unsigned char)237;
signed char var_19 = (signed char)-34;
unsigned char arr_1 [19] [19] ;
unsigned long long int arr_7 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)168;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 6099597726364175733ULL : 17946640078931252631ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
