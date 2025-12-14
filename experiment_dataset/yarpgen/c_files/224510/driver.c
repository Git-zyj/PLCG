#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)4679;
long long int var_5 = -5332424178031356475LL;
long long int var_7 = 8297115264895150763LL;
long long int var_8 = 3517516649430876581LL;
long long int var_9 = -1864658560429271065LL;
unsigned int var_13 = 903102503U;
unsigned short var_14 = (unsigned short)59235;
long long int var_16 = -1757659957825774452LL;
int zero = 0;
unsigned short var_17 = (unsigned short)46535;
unsigned long long int var_18 = 3959400722686409529ULL;
unsigned short var_19 = (unsigned short)28384;
unsigned long long int var_20 = 6078687194645211696ULL;
unsigned char arr_2 [20] [20] [20] ;
unsigned int arr_4 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned char)119;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 543101869U : 3404202982U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
