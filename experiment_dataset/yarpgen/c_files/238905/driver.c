#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23124;
int var_1 = 2046494311;
short var_2 = (short)-28332;
int var_3 = 1168071757;
unsigned int var_5 = 964027289U;
short var_9 = (short)26371;
short var_10 = (short)-27282;
unsigned char var_11 = (unsigned char)194;
int var_12 = 1295462680;
int zero = 0;
unsigned int var_13 = 3970281719U;
long long int var_14 = 7150370959788551781LL;
long long int var_15 = -3532142280327278648LL;
unsigned short var_16 = (unsigned short)58818;
_Bool var_17 = (_Bool)0;
long long int arr_3 [22] ;
unsigned long long int arr_6 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 1933384609508512407LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = 16733346011660693644ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
