#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9062183524624775995ULL;
unsigned char var_1 = (unsigned char)38;
unsigned int var_2 = 489322803U;
unsigned short var_3 = (unsigned short)39244;
int var_4 = 1054306999;
unsigned short var_5 = (unsigned short)22088;
unsigned long long int var_6 = 10712377011015951796ULL;
unsigned long long int var_7 = 12301545266452265465ULL;
signed char var_8 = (signed char)24;
int var_9 = -682414465;
unsigned short var_10 = (unsigned short)57313;
signed char var_11 = (signed char)99;
int var_12 = -1799862822;
unsigned int var_13 = 3054967532U;
unsigned short var_14 = (unsigned short)38799;
int zero = 0;
short var_15 = (short)-31471;
unsigned int var_16 = 2675292514U;
unsigned char var_17 = (unsigned char)105;
int var_18 = 1667377894;
unsigned char var_19 = (unsigned char)47;
int var_20 = 109091483;
short var_21 = (short)-21809;
unsigned long long int var_22 = 18263840276097060141ULL;
unsigned char arr_3 [22] ;
unsigned char arr_16 [12] [12] ;
int arr_17 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned char)123;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned char)104;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = 1690973281;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
