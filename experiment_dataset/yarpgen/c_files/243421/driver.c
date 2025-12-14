#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)17327;
unsigned char var_6 = (unsigned char)66;
unsigned int var_8 = 1441933020U;
unsigned char var_9 = (unsigned char)208;
long long int var_12 = -3277857103181145632LL;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)27384;
int var_15 = 1827607602;
int zero = 0;
unsigned long long int var_16 = 6409600892339317338ULL;
unsigned int var_17 = 1785315068U;
unsigned long long int var_18 = 281750601322754317ULL;
short var_19 = (short)-17727;
unsigned long long int var_20 = 5385733756632532882ULL;
short var_21 = (short)18819;
unsigned long long int arr_0 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 5776907887503091509ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
