#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)64;
unsigned long long int var_1 = 11154978792271967572ULL;
int var_2 = -1806527055;
unsigned int var_3 = 3750506908U;
int var_4 = -1375691205;
short var_5 = (short)-16350;
unsigned char var_6 = (unsigned char)67;
long long int var_7 = 5741417426984063528LL;
long long int var_8 = 7515879374043078428LL;
signed char var_9 = (signed char)28;
int zero = 0;
unsigned long long int var_10 = 8203306344746259583ULL;
short var_11 = (short)31329;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
int var_14 = 1114002360;
long long int var_15 = -3177832101809440627LL;
short var_16 = (short)-28091;
unsigned int arr_0 [11] ;
unsigned char arr_4 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 1026848110U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)30;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
