#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3425476388920470657LL;
unsigned long long int var_1 = 1367123184695798716ULL;
unsigned long long int var_2 = 113038543403032525ULL;
unsigned char var_6 = (unsigned char)60;
unsigned char var_9 = (unsigned char)46;
short var_11 = (short)23827;
int var_12 = -1110595277;
int var_14 = 1503188961;
unsigned char var_18 = (unsigned char)112;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 2121608746U;
unsigned char var_21 = (unsigned char)156;
unsigned short arr_0 [10] ;
int arr_1 [10] ;
_Bool arr_2 [10] [10] ;
unsigned short arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned short)2607;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 243183792;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned short)10402;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
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
