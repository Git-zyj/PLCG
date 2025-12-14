#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4493118975265985788LL;
unsigned short var_10 = (unsigned short)4386;
unsigned long long int var_14 = 1364937908818988076ULL;
int zero = 0;
long long int var_18 = 6180130403040859706LL;
signed char var_19 = (signed char)-24;
unsigned long long int var_20 = 15760209967363466000ULL;
short var_21 = (short)19619;
unsigned short var_22 = (unsigned short)595;
_Bool arr_0 [16] ;
unsigned long long int arr_3 [10] [10] ;
unsigned long long int arr_5 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = 9525619302993303327ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = 7476603920321574156ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
