#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20840;
int var_2 = 1553351162;
unsigned short var_3 = (unsigned short)28880;
long long int var_8 = -468961849574716681LL;
long long int var_12 = -8265902746086576436LL;
int zero = 0;
unsigned int var_20 = 1374855805U;
short var_21 = (short)-11068;
short var_22 = (short)-32094;
unsigned long long int var_23 = 2390680083249770550ULL;
int var_24 = -324306838;
unsigned long long int var_25 = 8384380837649017145ULL;
_Bool var_26 = (_Bool)1;
unsigned long long int var_27 = 12715266430701392055ULL;
unsigned long long int var_28 = 7484147650686314762ULL;
signed char var_29 = (signed char)15;
unsigned long long int var_30 = 1234028500531216673ULL;
unsigned int arr_0 [11] [11] ;
long long int arr_1 [11] ;
_Bool arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 2185640441U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 5018056939763408510LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
