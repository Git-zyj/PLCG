#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-25639;
unsigned long long int var_4 = 1236725799034871515ULL;
short var_7 = (short)-29142;
short var_11 = (short)19036;
unsigned long long int var_12 = 6791666552461936688ULL;
unsigned char var_13 = (unsigned char)230;
unsigned char var_14 = (unsigned char)206;
unsigned long long int var_16 = 17463744106597648157ULL;
int zero = 0;
unsigned long long int var_17 = 12608689562530867298ULL;
int var_18 = -470235890;
short var_19 = (short)-28208;
unsigned char var_20 = (unsigned char)201;
unsigned char arr_0 [18] [18] ;
unsigned long long int arr_2 [18] ;
int arr_3 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 14812589249248763633ULL : 5427511708579185215ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? -996585366 : 2107344635;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
