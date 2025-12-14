#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)15;
signed char var_2 = (signed char)-76;
signed char var_5 = (signed char)115;
unsigned char var_7 = (unsigned char)180;
unsigned long long int var_9 = 6071189453598198171ULL;
short var_12 = (short)-22337;
signed char var_15 = (signed char)-68;
int zero = 0;
unsigned short var_16 = (unsigned short)23767;
long long int var_17 = -1317740801643914785LL;
int var_18 = 1062379769;
short var_19 = (short)-1220;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 2084719955U;
unsigned char arr_3 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)123;
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
