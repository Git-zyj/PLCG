#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)17;
signed char var_2 = (signed char)26;
unsigned char var_3 = (unsigned char)93;
unsigned long long int var_4 = 1074654663500607351ULL;
_Bool var_5 = (_Bool)0;
long long int var_6 = -9097375090814211022LL;
_Bool var_15 = (_Bool)1;
unsigned long long int var_19 = 16345382042694517697ULL;
int zero = 0;
unsigned long long int var_20 = 8966446451354319057ULL;
long long int var_21 = -6703802875521853637LL;
unsigned long long int var_22 = 6900298272226112303ULL;
short var_23 = (short)-29777;
unsigned long long int var_24 = 5382612425598329921ULL;
_Bool var_25 = (_Bool)1;
signed char arr_1 [22] ;
signed char arr_3 [22] ;
short arr_5 [22] ;
int arr_6 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)17;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (signed char)88;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (short)25678;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -97083988;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
