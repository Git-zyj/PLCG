#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25546;
unsigned short var_1 = (unsigned short)26188;
long long int var_3 = 6260993742965151594LL;
unsigned long long int var_4 = 1211562364064604379ULL;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)-109;
int zero = 0;
signed char var_10 = (signed char)106;
short var_11 = (short)-24543;
unsigned char var_12 = (unsigned char)13;
signed char var_13 = (signed char)-84;
unsigned short var_14 = (unsigned short)43014;
unsigned long long int var_15 = 14468100848094082075ULL;
long long int var_16 = -208200133819977299LL;
unsigned char arr_0 [23] ;
short arr_1 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned char)249;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (short)15332;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
