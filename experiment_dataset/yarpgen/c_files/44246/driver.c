#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3929053615195438786LL;
unsigned long long int var_4 = 15325701566675976144ULL;
unsigned int var_5 = 3228403399U;
unsigned short var_7 = (unsigned short)21449;
long long int var_9 = 3178902630484476712LL;
unsigned short var_11 = (unsigned short)6947;
short var_12 = (short)10769;
unsigned long long int var_16 = 6311359159807864540ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)103;
unsigned short var_18 = (unsigned short)40580;
unsigned long long int var_19 = 17790131408588023302ULL;
unsigned long long int var_20 = 17765803913062502827ULL;
int var_21 = -219254995;
long long int var_22 = 869855907010891888LL;
unsigned short var_23 = (unsigned short)44497;
short arr_0 [25] [25] ;
short arr_3 [25] ;
long long int arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-14335;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (short)-13784;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 9025045633662677732LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
