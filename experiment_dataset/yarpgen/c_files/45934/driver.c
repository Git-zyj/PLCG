#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 816572187;
short var_5 = (short)21775;
unsigned long long int var_12 = 4803391775840593548ULL;
int var_14 = 1579141085;
long long int var_16 = -7303740632233784389LL;
int zero = 0;
unsigned short var_20 = (unsigned short)58061;
unsigned long long int var_21 = 13642762973644769620ULL;
unsigned long long int var_22 = 10503969520952158471ULL;
unsigned char var_23 = (unsigned char)129;
signed char var_24 = (signed char)89;
unsigned short arr_0 [23] ;
long long int arr_1 [23] [23] ;
int arr_4 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned short)14176;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? -5740853086964471951LL : 7550106642917668472LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = -1321198944;
}

void checksum() {
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
