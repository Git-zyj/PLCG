#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8776831425910378564ULL;
unsigned char var_1 = (unsigned char)224;
unsigned char var_2 = (unsigned char)206;
unsigned long long int var_3 = 7834093405416052033ULL;
unsigned int var_4 = 2304862995U;
long long int var_6 = -4873036709320370753LL;
unsigned long long int var_7 = 15008574915469669633ULL;
unsigned char var_8 = (unsigned char)22;
short var_9 = (short)-25855;
long long int var_10 = -7343118738612887363LL;
unsigned long long int var_11 = 18232986896998938413ULL;
unsigned char var_12 = (unsigned char)162;
short var_13 = (short)23523;
unsigned short var_14 = (unsigned short)31668;
unsigned char var_15 = (unsigned char)122;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-23011;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)38;
unsigned char arr_0 [16] [16] ;
unsigned short arr_2 [16] ;
long long int arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)160;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned short)11122;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = -3989655186943173494LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
