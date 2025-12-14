#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1443350771U;
long long int var_1 = 6948546262004917112LL;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 12305956411914908403ULL;
int var_4 = -1293272163;
signed char var_6 = (signed char)39;
int var_7 = 1865679828;
unsigned short var_14 = (unsigned short)60016;
int var_15 = 1023888125;
_Bool var_16 = (_Bool)0;
unsigned int var_19 = 1045201985U;
int zero = 0;
unsigned char var_20 = (unsigned char)58;
unsigned long long int var_21 = 10592340758644017885ULL;
int var_22 = -814185526;
long long int var_23 = -8956948010608393751LL;
short var_24 = (short)13399;
short var_25 = (short)-29465;
unsigned int arr_0 [22] ;
long long int arr_1 [22] [22] ;
long long int arr_3 [19] [19] ;
_Bool arr_2 [22] ;
unsigned char arr_5 [19] ;
short arr_6 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 1632381485U : 2355952589U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = -1253132520250810608LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = -3454111803988813585LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (unsigned char)192;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (short)9927;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
