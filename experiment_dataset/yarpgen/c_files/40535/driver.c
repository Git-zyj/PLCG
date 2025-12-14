#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)65;
unsigned long long int var_4 = 673566280767620273ULL;
int var_7 = -1059293980;
unsigned char var_8 = (unsigned char)22;
signed char var_9 = (signed char)-25;
signed char var_11 = (signed char)-126;
unsigned int var_12 = 79797276U;
int zero = 0;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-9;
long long int var_15 = -4309458437149379496LL;
unsigned char var_16 = (unsigned char)64;
long long int var_17 = -8944756971441263657LL;
unsigned char arr_4 [14] [14] ;
unsigned int arr_10 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)171;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 3802290689U : 3174028353U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
