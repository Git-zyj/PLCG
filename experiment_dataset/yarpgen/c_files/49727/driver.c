#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1712386230103447312LL;
_Bool var_1 = (_Bool)1;
signed char var_4 = (signed char)98;
int var_5 = 270323682;
int var_6 = 253936489;
short var_8 = (short)-15089;
unsigned long long int var_10 = 6611687170835907228ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_15 = (signed char)-93;
long long int var_16 = 1489230295120459058LL;
short var_17 = (short)-5235;
_Bool var_18 = (_Bool)0;
int var_19 = -1778960989;
int var_20 = 1157838667;
int var_21 = -1817097970;
int arr_0 [16] [16] ;
int arr_1 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = -1827445185;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = -512286903;
}

void checksum() {
    hash(&seed, var_15);
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
