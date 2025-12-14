#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 710862112;
int var_1 = 1167670695;
long long int var_2 = 4251756200360593783LL;
_Bool var_3 = (_Bool)0;
int var_4 = -649047985;
unsigned short var_6 = (unsigned short)54011;
long long int var_7 = 5941163178857176776LL;
int zero = 0;
long long int var_10 = 7127120056349184086LL;
long long int var_11 = -1605816689412378304LL;
_Bool var_12 = (_Bool)1;
long long int var_13 = 2077388489432152299LL;
short var_14 = (short)-24489;
short var_15 = (short)-27689;
long long int var_16 = -3066983335185659091LL;
unsigned char var_17 = (unsigned char)207;
short arr_0 [11] ;
int arr_2 [11] ;
unsigned long long int arr_3 [11] [11] ;
unsigned short arr_4 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (short)-8046;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = -1665070897;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = 13759026376737877072ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (unsigned short)58721;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
