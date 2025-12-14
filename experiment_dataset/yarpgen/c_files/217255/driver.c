#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6393828447046206852ULL;
signed char var_3 = (signed char)102;
unsigned int var_6 = 3581862311U;
unsigned long long int var_8 = 2953428505931132094ULL;
long long int var_10 = -1207041839328151168LL;
long long int var_13 = 7016120703080700879LL;
_Bool var_15 = (_Bool)0;
int zero = 0;
short var_16 = (short)-28757;
unsigned short var_17 = (unsigned short)32800;
int var_18 = 1146597808;
long long int var_19 = 8493590311040901766LL;
short var_20 = (short)-4012;
long long int var_21 = 50318798139833294LL;
unsigned short var_22 = (unsigned short)42843;
signed char arr_0 [17] ;
unsigned short arr_1 [17] [17] ;
unsigned int arr_2 [11] [11] ;
unsigned short arr_4 [11] ;
unsigned char arr_5 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (signed char)-36;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)62060;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 2297971617U : 2727688406U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)58564 : (unsigned short)4832;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)114 : (unsigned char)239;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
