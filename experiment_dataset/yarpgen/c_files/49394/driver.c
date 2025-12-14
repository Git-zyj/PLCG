#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2192685122U;
_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)106;
unsigned int var_5 = 3168272722U;
_Bool var_6 = (_Bool)1;
unsigned char var_9 = (unsigned char)164;
unsigned char var_10 = (unsigned char)160;
short var_11 = (short)19177;
int zero = 0;
short var_12 = (short)13492;
long long int var_13 = 3226176224368536286LL;
unsigned char var_14 = (unsigned char)141;
unsigned int var_15 = 3005078206U;
unsigned short var_16 = (unsigned short)17736;
_Bool var_17 = (_Bool)0;
int var_18 = -2057979818;
long long int arr_0 [22] [22] ;
unsigned int arr_1 [22] ;
unsigned short arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 5090620778648840618LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 3244191134U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned short)23195;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
