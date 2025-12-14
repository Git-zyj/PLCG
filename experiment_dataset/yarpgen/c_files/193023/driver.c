#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)12;
unsigned int var_1 = 1561134925U;
unsigned int var_4 = 533871851U;
unsigned short var_5 = (unsigned short)63410;
signed char var_7 = (signed char)37;
long long int var_9 = 7227856926045299069LL;
unsigned int var_12 = 2746566993U;
int zero = 0;
_Bool var_15 = (_Bool)1;
int var_16 = -1394836758;
unsigned long long int var_17 = 16152941558245187385ULL;
int var_18 = -688556255;
unsigned char var_19 = (unsigned char)5;
unsigned char arr_6 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)183;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
