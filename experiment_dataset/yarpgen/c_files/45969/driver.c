#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1742860960120145800ULL;
long long int var_3 = 4364549136698214740LL;
long long int var_4 = 6970448263796932175LL;
unsigned char var_7 = (unsigned char)61;
unsigned long long int var_9 = 18327302019283190410ULL;
long long int var_10 = -4183577714751912515LL;
long long int var_12 = 4113223315493871603LL;
short var_14 = (short)-699;
unsigned char var_15 = (unsigned char)83;
int zero = 0;
unsigned char var_17 = (unsigned char)135;
unsigned long long int var_18 = 11423781872110885214ULL;
unsigned long long int var_19 = 5658419034464811820ULL;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)48508;
unsigned int arr_2 [14] ;
unsigned char arr_17 [21] [21] [21] [21] ;
unsigned char arr_6 [14] [14] [14] ;
long long int arr_15 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 4015867660U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (unsigned char)55;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)244;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = -7730517653054350601LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
