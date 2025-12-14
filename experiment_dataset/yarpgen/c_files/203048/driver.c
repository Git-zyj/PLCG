#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)62055;
long long int var_4 = 8428489942459256910LL;
_Bool var_5 = (_Bool)1;
long long int var_7 = 345268975778922512LL;
short var_9 = (short)-28707;
unsigned char var_10 = (unsigned char)248;
unsigned int var_12 = 4277839720U;
unsigned short var_13 = (unsigned short)19038;
unsigned char var_14 = (unsigned char)232;
unsigned long long int var_16 = 7563385399907066358ULL;
unsigned long long int var_17 = 17039042364444749319ULL;
long long int var_19 = 3415699791585826198LL;
int zero = 0;
unsigned long long int var_20 = 16232157286177555452ULL;
unsigned long long int var_21 = 8387601585874465742ULL;
signed char var_22 = (signed char)-13;
short var_23 = (short)16792;
unsigned short arr_6 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)26048 : (unsigned short)47766;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_6 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
