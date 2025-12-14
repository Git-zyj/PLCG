#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 527051483;
int var_1 = -1908941041;
long long int var_3 = -8140206035198898559LL;
unsigned int var_4 = 1534283198U;
int var_7 = -1729396662;
long long int var_8 = -7898351790426091916LL;
unsigned int var_10 = 1354329645U;
_Bool var_11 = (_Bool)0;
long long int var_12 = 7685181309895755713LL;
unsigned short var_13 = (unsigned short)28042;
unsigned char var_15 = (unsigned char)186;
int zero = 0;
unsigned char var_16 = (unsigned char)93;
unsigned int var_17 = 2469661932U;
unsigned short arr_0 [10] ;
unsigned long long int arr_2 [10] [10] ;
unsigned short arr_3 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned short)19904;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 12504395442100819892ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)35293;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
