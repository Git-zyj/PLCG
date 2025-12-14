#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)64073;
signed char var_10 = (signed char)-101;
unsigned int var_11 = 2578791845U;
short var_12 = (short)5345;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned long long int var_17 = 11029752088574691735ULL;
signed char var_18 = (signed char)-57;
signed char var_19 = (signed char)102;
unsigned long long int arr_0 [20] ;
int arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 17720639702669282183ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 558132178;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
