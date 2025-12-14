#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)216;
_Bool var_4 = (_Bool)1;
unsigned int var_7 = 412048180U;
_Bool var_8 = (_Bool)0;
unsigned int var_11 = 3110836653U;
unsigned char var_12 = (unsigned char)249;
int var_13 = -1414430750;
unsigned long long int var_15 = 9770835583139664329ULL;
signed char var_16 = (signed char)68;
unsigned int var_17 = 1911886173U;
int zero = 0;
short var_18 = (short)-26061;
unsigned int var_19 = 853455814U;
long long int var_20 = -8056873541048008631LL;
unsigned int var_21 = 3881897876U;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 7211630996821296276ULL;
int arr_1 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? -1183649094 : 949951780;
}

void checksum() {
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
