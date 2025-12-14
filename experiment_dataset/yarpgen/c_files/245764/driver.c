#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)192;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)5062;
unsigned int var_3 = 1761255882U;
long long int var_4 = 4955763812272520718LL;
long long int var_5 = -1496783191095822194LL;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 1080073831U;
signed char var_9 = (signed char)11;
unsigned short var_10 = (unsigned short)18157;
unsigned long long int var_15 = 18098076551070434887ULL;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned short var_20 = (unsigned short)38255;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 4028800675U;
unsigned short var_23 = (unsigned short)17270;
unsigned short var_24 = (unsigned short)49547;
_Bool arr_3 [10] [10] ;
signed char arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (signed char)9;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
