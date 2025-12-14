#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47600;
_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)-75;
int var_8 = -911429683;
unsigned short var_9 = (unsigned short)32007;
unsigned short var_11 = (unsigned short)2896;
short var_14 = (short)-11431;
long long int var_16 = 1586346370800297101LL;
_Bool var_17 = (_Bool)1;
int zero = 0;
long long int var_19 = 3716155125329067748LL;
unsigned int var_20 = 1099069475U;
unsigned long long int var_21 = 10800147482167467096ULL;
unsigned long long int var_22 = 2275599955552290387ULL;
long long int var_23 = 6778444891241620081LL;
short arr_1 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-14188;
}

void checksum() {
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
