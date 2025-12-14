#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12551443427210534349ULL;
unsigned short var_1 = (unsigned short)2763;
long long int var_6 = 8654108131101751738LL;
unsigned long long int var_8 = 14207145215085957671ULL;
unsigned char var_9 = (unsigned char)83;
unsigned char var_13 = (unsigned char)17;
int var_18 = -175986181;
int zero = 0;
unsigned long long int var_19 = 10267955853314495773ULL;
unsigned long long int var_20 = 17652604816736920840ULL;
unsigned int var_21 = 4145571691U;
unsigned long long int var_22 = 17379679111695609946ULL;
int var_23 = 1325964147;
unsigned char var_24 = (unsigned char)33;
long long int var_25 = -1331907664085316911LL;
unsigned char arr_1 [21] ;
_Bool arr_5 [21] [21] ;
unsigned long long int arr_9 [19] [19] ;
unsigned char arr_15 [19] [19] [19] [19] ;
unsigned short arr_6 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = 10398460752919981961ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (unsigned short)65030;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
