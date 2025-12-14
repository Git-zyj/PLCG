#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 777322677667477962ULL;
unsigned short var_4 = (unsigned short)34653;
unsigned int var_5 = 1765111779U;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 14364390792369714462ULL;
unsigned short var_13 = (unsigned short)54293;
unsigned short var_14 = (unsigned short)65505;
int arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -594682906 : -1155042959;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
