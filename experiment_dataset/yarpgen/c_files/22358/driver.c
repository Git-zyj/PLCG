#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1269028664248592026LL;
unsigned char var_3 = (unsigned char)56;
long long int var_4 = -4612136442817750158LL;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 1132824518U;
short var_7 = (short)21947;
long long int var_9 = -8294654813462253398LL;
long long int var_10 = -8304898632087468269LL;
unsigned int var_11 = 2923175959U;
signed char var_12 = (signed char)11;
int zero = 0;
unsigned int var_13 = 2269016129U;
signed char var_14 = (signed char)-90;
_Bool var_15 = (_Bool)1;
long long int var_16 = -3812266842318646553LL;
unsigned short arr_3 [10] ;
signed char arr_4 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned short)19974;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)82;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
