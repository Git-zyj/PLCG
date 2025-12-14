#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)188;
long long int var_2 = -1873050285572242108LL;
unsigned short var_5 = (unsigned short)51135;
signed char var_6 = (signed char)26;
long long int var_10 = -720762337375564331LL;
unsigned long long int var_12 = 9519668858509694108ULL;
int zero = 0;
long long int var_14 = -1381552404196756473LL;
unsigned short var_15 = (unsigned short)36696;
unsigned int var_16 = 150106921U;
signed char var_17 = (signed char)-55;
signed char var_18 = (signed char)92;
_Bool var_19 = (_Bool)1;
unsigned long long int arr_0 [21] ;
unsigned char arr_10 [21] ;
signed char arr_4 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 7304042567273668835ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (unsigned char)103;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-65;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
