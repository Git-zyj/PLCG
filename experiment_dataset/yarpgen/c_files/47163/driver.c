#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15512;
long long int var_2 = 3067628246067697250LL;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)69;
_Bool var_5 = (_Bool)1;
int var_6 = 2133570619;
signed char var_8 = (signed char)19;
long long int var_9 = -9184472708471354456LL;
int zero = 0;
unsigned long long int var_10 = 7789949860740952378ULL;
unsigned char var_11 = (unsigned char)30;
long long int var_12 = 2059984502663216140LL;
int arr_2 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? -1797966540 : 947776098;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
