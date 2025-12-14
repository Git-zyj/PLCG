#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)38126;
unsigned long long int var_3 = 7951228921089517062ULL;
unsigned long long int var_4 = 1921056639022245572ULL;
unsigned long long int var_5 = 16518940876770884052ULL;
short var_8 = (short)23089;
unsigned long long int var_9 = 16874489603227144669ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)13466;
_Bool var_14 = (_Bool)0;
int var_15 = -1745107607;
_Bool arr_0 [19] ;
unsigned short arr_1 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)64359 : (unsigned short)34216;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
