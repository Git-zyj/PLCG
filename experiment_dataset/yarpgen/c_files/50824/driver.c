#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)8728;
int var_4 = 1257977037;
int var_13 = -526621680;
int var_16 = -1048975691;
int zero = 0;
signed char var_19 = (signed char)86;
signed char var_20 = (signed char)47;
long long int var_21 = 929708126992359338LL;
unsigned char var_22 = (unsigned char)211;
signed char var_23 = (signed char)98;
unsigned int var_24 = 1343834392U;
int arr_0 [11] ;
unsigned long long int arr_3 [11] ;
unsigned short arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = -1183635361;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 2904834639177944278ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)46047 : (unsigned short)62869;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
