#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)202;
long long int var_1 = 1114531309995200271LL;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)139;
int var_6 = 1286982790;
int var_7 = -2105250188;
unsigned int var_8 = 133703662U;
short var_9 = (short)-20556;
long long int var_10 = 802496857963152508LL;
int zero = 0;
unsigned short var_11 = (unsigned short)23008;
short var_12 = (short)13179;
unsigned char var_13 = (unsigned char)231;
signed char var_14 = (signed char)89;
long long int var_15 = 7617836820824656129LL;
long long int var_16 = -4673274197127798674LL;
unsigned int var_17 = 1535239034U;
unsigned long long int var_18 = 3741674646390646392ULL;
signed char var_19 = (signed char)67;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 68869491U;
unsigned short arr_0 [10] ;
unsigned short arr_1 [10] [10] ;
unsigned short arr_7 [10] ;
short arr_12 [10] [10] [10] ;
short arr_15 [21] ;
unsigned char arr_17 [21] [21] ;
unsigned int arr_19 [25] ;
long long int arr_21 [25] [25] ;
unsigned char arr_2 [10] ;
unsigned long long int arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned short)25736;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)57370;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (unsigned short)61244;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (short)-27413;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = (short)19939;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned char)137;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_19 [i_0] = 1454146059U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_21 [i_0] [i_1] = -8487808252273078282LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned char)137;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 6267920945494552475ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
