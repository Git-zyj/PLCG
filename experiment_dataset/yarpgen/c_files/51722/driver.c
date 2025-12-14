#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8516;
short var_1 = (short)4122;
short var_2 = (short)2483;
short var_3 = (short)-6969;
int var_5 = -2016532770;
int var_6 = -241986851;
signed char var_7 = (signed char)80;
unsigned long long int var_8 = 2283266624158151555ULL;
long long int var_12 = -445572026673444259LL;
signed char var_14 = (signed char)-108;
unsigned short var_15 = (unsigned short)18093;
int zero = 0;
int var_16 = 313271652;
unsigned char var_17 = (unsigned char)14;
short var_18 = (short)19377;
unsigned long long int var_19 = 1564245978842571506ULL;
signed char var_20 = (signed char)65;
signed char var_21 = (signed char)5;
long long int arr_1 [10] ;
int arr_2 [10] ;
signed char arr_5 [10] ;
int arr_7 [10] ;
int arr_8 [10] ;
signed char arr_9 [10] [10] [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 2834978892938197428LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1110090596 : 2113663400;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (signed char)65;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = 304962062;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 1253965144 : 2105111302;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (signed char)-104 : (signed char)-110;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
