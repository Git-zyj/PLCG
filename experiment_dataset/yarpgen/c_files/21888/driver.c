#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -941214750;
unsigned char var_3 = (unsigned char)103;
unsigned int var_4 = 4054291695U;
short var_5 = (short)-32138;
signed char var_8 = (signed char)-4;
signed char var_9 = (signed char)70;
unsigned short var_11 = (unsigned short)3677;
short var_13 = (short)-8366;
unsigned long long int var_15 = 357361025702411763ULL;
int zero = 0;
long long int var_16 = 8665438826399664890LL;
signed char var_17 = (signed char)105;
int var_18 = -1368656490;
unsigned long long int var_19 = 14679248819738395439ULL;
long long int var_20 = -2441234839009084497LL;
unsigned int var_21 = 595830265U;
unsigned short arr_1 [17] ;
unsigned int arr_5 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned short)29661;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 745955793U;
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
