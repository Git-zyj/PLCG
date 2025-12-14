#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6184288563120903730LL;
unsigned short var_2 = (unsigned short)5898;
unsigned char var_6 = (unsigned char)117;
_Bool var_7 = (_Bool)0;
unsigned short var_9 = (unsigned short)2925;
unsigned char var_12 = (unsigned char)11;
unsigned char var_14 = (unsigned char)106;
int zero = 0;
long long int var_16 = -641895871797540054LL;
long long int var_17 = -6434449942851764759LL;
long long int var_18 = -4320367713575733539LL;
unsigned short var_19 = (unsigned short)62554;
long long int var_20 = 2781912843266633946LL;
_Bool var_21 = (_Bool)1;
long long int arr_0 [15] [15] ;
short arr_1 [15] [15] ;
short arr_2 [15] ;
_Bool arr_3 [15] ;
long long int arr_4 [15] ;
unsigned short arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = -2294138338306163953LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-3735;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (short)24348;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 2573541277202760510LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)43569 : (unsigned short)59045;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
