#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-6;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)21;
int var_6 = -1849122389;
signed char var_8 = (signed char)78;
_Bool var_9 = (_Bool)1;
long long int var_10 = 4342833068526406090LL;
int zero = 0;
int var_11 = 1684165444;
signed char var_12 = (signed char)13;
signed char var_13 = (signed char)66;
signed char var_14 = (signed char)13;
long long int var_15 = -8422403374490395194LL;
short var_16 = (short)-22797;
unsigned char var_17 = (unsigned char)164;
short var_18 = (short)21843;
long long int var_19 = 5427139536087892693LL;
int var_20 = 961506847;
signed char arr_0 [25] ;
long long int arr_2 [25] ;
int arr_3 [25] [25] ;
short arr_11 [10] ;
short arr_7 [21] ;
long long int arr_10 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (signed char)112;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 960507072447651696LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 1222757303;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (short)-3531;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (short)-31490;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = -7589304346121838802LL;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
