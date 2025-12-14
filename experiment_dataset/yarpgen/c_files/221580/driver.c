#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6328967343306881609LL;
long long int var_1 = -6481902618132286464LL;
unsigned long long int var_2 = 10715630996137928797ULL;
unsigned int var_3 = 2033911070U;
unsigned short var_5 = (unsigned short)11518;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)13846;
signed char var_9 = (signed char)44;
int var_11 = -1081757832;
int zero = 0;
long long int var_12 = 8301682807137154281LL;
unsigned int var_13 = 2627437306U;
unsigned char var_14 = (unsigned char)85;
long long int var_15 = 4014229949873821487LL;
unsigned short var_16 = (unsigned short)31491;
long long int var_17 = -6992102372297837245LL;
unsigned char var_18 = (unsigned char)11;
unsigned short arr_0 [20] ;
unsigned long long int arr_9 [24] ;
signed char arr_7 [15] ;
unsigned long long int arr_10 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned short)50935;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = 11881473902178735210ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (signed char)-62;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = 7200015822413379461ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
