#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)132;
unsigned short var_1 = (unsigned short)22786;
signed char var_2 = (signed char)21;
unsigned long long int var_4 = 5171110321692522499ULL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_13 = 15521677822554924100ULL;
short var_16 = (short)-3350;
signed char var_18 = (signed char)-58;
int zero = 0;
unsigned long long int var_19 = 11856833953724961113ULL;
signed char var_20 = (signed char)-20;
short var_21 = (short)8504;
int var_22 = 2116125139;
unsigned short var_23 = (unsigned short)25789;
long long int var_24 = -8235895511294356341LL;
_Bool arr_0 [15] ;
_Bool arr_2 [15] ;
short arr_3 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)-27714;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
