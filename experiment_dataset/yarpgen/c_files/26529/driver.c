#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1075117743;
signed char var_1 = (signed char)-108;
signed char var_3 = (signed char)51;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)18652;
unsigned short var_9 = (unsigned short)52487;
unsigned short var_10 = (unsigned short)16114;
int var_11 = 1161367354;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 3701064919U;
_Bool var_14 = (_Bool)0;
int var_15 = -949454186;
unsigned short var_16 = (unsigned short)21463;
unsigned char var_17 = (unsigned char)31;
unsigned long long int var_18 = 6489212163657339904ULL;
long long int arr_0 [18] ;
unsigned long long int arr_1 [18] [18] ;
long long int arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = -7175277286127125954LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 14665975882898827035ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 7606075543331308054LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
