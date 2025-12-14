#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1386207146773206190LL;
unsigned short var_1 = (unsigned short)21259;
long long int var_2 = 1954481696196051630LL;
signed char var_3 = (signed char)-36;
int var_7 = -535443853;
int var_8 = 816298576;
unsigned char var_9 = (unsigned char)170;
unsigned int var_10 = 1514338590U;
long long int var_12 = -8899628895738816911LL;
int zero = 0;
long long int var_15 = -1980852901048405787LL;
unsigned short var_16 = (unsigned short)28532;
int var_17 = -933599958;
short var_18 = (short)-28016;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 3075689866U;
int var_21 = 1042170767;
long long int var_22 = 8311784522762536935LL;
int var_23 = -1054520914;
unsigned int arr_5 [13] [13] ;
short arr_7 [13] [13] [13] ;
signed char arr_8 [13] [13] ;
int arr_9 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = 2373995695U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)28195;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)-96;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 197216575;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
