#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)160;
long long int var_3 = -5719769718967220497LL;
_Bool var_5 = (_Bool)0;
short var_7 = (short)-5381;
long long int var_8 = 8457511835442892286LL;
unsigned short var_9 = (unsigned short)37317;
long long int var_10 = -7784137210187424429LL;
long long int var_11 = 8595440485418658915LL;
unsigned long long int var_13 = 8563933922171546266ULL;
int var_14 = -1267086829;
unsigned short var_15 = (unsigned short)8114;
unsigned short var_17 = (unsigned short)21675;
int zero = 0;
unsigned long long int var_18 = 10961742768039082857ULL;
long long int var_19 = 7675481223180174390LL;
unsigned long long int var_20 = 10825616441731831943ULL;
signed char var_21 = (signed char)-13;
short arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (short)-21470;
}

void checksum() {
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
