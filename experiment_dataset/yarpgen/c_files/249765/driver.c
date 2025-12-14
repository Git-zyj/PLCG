#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)182;
signed char var_4 = (signed char)97;
short var_5 = (short)-2607;
unsigned long long int var_7 = 1421156130752386625ULL;
unsigned int var_9 = 2756993766U;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)68;
signed char var_16 = (signed char)40;
short var_17 = (short)4131;
signed char var_18 = (signed char)5;
unsigned short var_19 = (unsigned short)36042;
int var_20 = 1080324839;
unsigned short var_21 = (unsigned short)45537;
signed char arr_1 [24] ;
int arr_4 [24] [24] ;
unsigned long long int arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)44;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 536232241 : -1041346321;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 4096850440949825654ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
