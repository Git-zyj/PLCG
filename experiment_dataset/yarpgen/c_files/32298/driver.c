#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)21011;
unsigned int var_2 = 3877622109U;
short var_3 = (short)26109;
long long int var_7 = 3542534990750484401LL;
unsigned int var_8 = 1944681627U;
short var_12 = (short)-30430;
unsigned char var_13 = (unsigned char)54;
unsigned char var_14 = (unsigned char)68;
unsigned long long int var_15 = 5452332665385589108ULL;
short var_16 = (short)-26796;
long long int var_19 = 4586935183589465385LL;
int zero = 0;
long long int var_20 = 3855105494002358703LL;
short var_21 = (short)30184;
signed char var_22 = (signed char)-123;
_Bool var_23 = (_Bool)0;
short var_24 = (short)24476;
short var_25 = (short)5321;
unsigned short var_26 = (unsigned short)6418;
_Bool var_27 = (_Bool)0;
unsigned short var_28 = (unsigned short)31270;
short arr_1 [18] ;
unsigned long long int arr_2 [18] ;
unsigned short arr_3 [18] [18] ;
long long int arr_4 [25] [25] ;
unsigned short arr_7 [25] [25] ;
unsigned int arr_8 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (short)-26334;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 4153826284959706377ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)51786;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 8845367294543286906LL : -2031562239071654514LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)36097;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 2476271535U : 777197417U;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
