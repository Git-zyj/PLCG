#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 34935672;
int var_1 = -361786595;
signed char var_2 = (signed char)-63;
long long int var_5 = -3075808819169017897LL;
unsigned short var_6 = (unsigned short)30085;
signed char var_7 = (signed char)-60;
long long int var_9 = 4197254153439225909LL;
signed char var_11 = (signed char)36;
unsigned char var_13 = (unsigned char)4;
signed char var_15 = (signed char)103;
_Bool var_17 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)-103;
long long int var_20 = -584579254641559999LL;
long long int var_21 = -5015834906426887766LL;
long long int var_22 = -5029615784492292367LL;
signed char arr_0 [15] ;
unsigned short arr_4 [15] [15] ;
int arr_6 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)-71 : (signed char)43;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)64930 : (unsigned short)12422;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 1931605399;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
