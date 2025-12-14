#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)97;
unsigned short var_4 = (unsigned short)32613;
short var_6 = (short)-7127;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)43;
unsigned short var_12 = (unsigned short)59050;
short var_14 = (short)-29873;
int zero = 0;
long long int var_18 = -6101540068232786683LL;
long long int var_19 = -329074201682923620LL;
int var_20 = 1235227093;
long long int var_21 = -244413214342866297LL;
short var_22 = (short)-18578;
unsigned long long int arr_3 [16] ;
long long int arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 18428493566358425150ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -333228600844622114LL : 100563724602856921LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
