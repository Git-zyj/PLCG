#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_2 = (unsigned char)126;
long long int var_6 = 6982596838177601104LL;
unsigned long long int var_9 = 10071504820631803548ULL;
_Bool var_10 = (_Bool)1;
short var_13 = (short)-16744;
int zero = 0;
unsigned char var_14 = (unsigned char)160;
int var_15 = 1611254775;
unsigned long long int var_16 = 1080394413085527585ULL;
unsigned long long int var_17 = 11280647895900240853ULL;
unsigned long long int var_18 = 17936727553784189420ULL;
long long int arr_0 [11] ;
_Bool arr_1 [11] [11] ;
int arr_2 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 6389998183548062878LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 957438798;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
