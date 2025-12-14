#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 18394990933227147334ULL;
signed char var_7 = (signed char)43;
unsigned short var_9 = (unsigned short)3212;
short var_10 = (short)22303;
signed char var_18 = (signed char)10;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 309427671U;
unsigned long long int var_21 = 11483691245647251451ULL;
unsigned int var_22 = 459616645U;
short var_23 = (short)-17248;
long long int arr_1 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 4249027510493900713LL;
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
