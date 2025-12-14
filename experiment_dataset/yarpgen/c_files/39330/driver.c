#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)104;
unsigned char var_4 = (unsigned char)146;
long long int var_8 = 1617240176881765369LL;
unsigned int var_9 = 2221612980U;
long long int var_10 = 168358854008426087LL;
unsigned short var_11 = (unsigned short)49407;
int var_13 = 1083178673;
int zero = 0;
signed char var_17 = (signed char)123;
int var_18 = -142902197;
int var_19 = -1901433356;
unsigned long long int var_20 = 8070573610110304552ULL;
unsigned char var_21 = (unsigned char)105;
int var_22 = -1022706415;
unsigned char arr_3 [10] [10] ;
unsigned char arr_6 [10] [10] [10] ;
unsigned char arr_11 [17] ;
unsigned short arr_12 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)202;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)244 : (unsigned char)176;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = (unsigned char)246;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned short)52207 : (unsigned short)50740;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
