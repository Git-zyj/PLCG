#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_3 = (unsigned short)20324;
long long int var_6 = 8654380120347291734LL;
short var_9 = (short)-16442;
_Bool var_10 = (_Bool)1;
unsigned long long int var_12 = 7994409832509609931ULL;
unsigned int var_13 = 1753802818U;
int zero = 0;
unsigned long long int var_14 = 14652886645554760108ULL;
unsigned short var_15 = (unsigned short)54590;
unsigned char var_16 = (unsigned char)117;
_Bool var_17 = (_Bool)1;
long long int var_18 = 3174005455040106482LL;
unsigned long long int var_19 = 13928758412222592627ULL;
signed char arr_2 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (signed char)-90;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
