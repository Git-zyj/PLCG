#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12505599504211439000ULL;
unsigned long long int var_2 = 6714281372254183227ULL;
unsigned short var_3 = (unsigned short)21719;
int var_4 = 1332930276;
long long int var_8 = 8606317598694039600LL;
unsigned int var_10 = 1495331508U;
unsigned char var_11 = (unsigned char)19;
int var_12 = 1433223694;
signed char var_15 = (signed char)-37;
int var_16 = 2034659219;
unsigned char var_18 = (unsigned char)1;
signed char var_19 = (signed char)54;
int zero = 0;
_Bool var_20 = (_Bool)1;
long long int var_21 = 8195288541127529346LL;
_Bool var_22 = (_Bool)0;
unsigned int arr_2 [11] [11] ;
_Bool arr_4 [11] ;
unsigned char arr_7 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 4043149025U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (unsigned char)254;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
