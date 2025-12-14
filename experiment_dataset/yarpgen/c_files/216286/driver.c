#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)63164;
unsigned long long int var_4 = 17019006480972523202ULL;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)167;
unsigned short var_8 = (unsigned short)17234;
int var_9 = -1178472829;
unsigned char var_12 = (unsigned char)117;
unsigned long long int var_14 = 3695102585690829112ULL;
unsigned char var_15 = (unsigned char)246;
unsigned short var_18 = (unsigned short)14330;
int zero = 0;
int var_19 = -1667772477;
unsigned char var_20 = (unsigned char)113;
unsigned int var_21 = 2921341498U;
unsigned short arr_1 [15] ;
unsigned long long int arr_7 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned short)30553;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? 3274886546842160838ULL : 14137561386962350154ULL;
}

void checksum() {
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
