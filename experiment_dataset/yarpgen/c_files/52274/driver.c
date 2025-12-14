#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-9987;
short var_6 = (short)-20814;
unsigned char var_9 = (unsigned char)219;
unsigned long long int var_11 = 12252830039602923258ULL;
int zero = 0;
short var_12 = (short)8176;
unsigned long long int var_13 = 12362904531085706822ULL;
unsigned char var_14 = (unsigned char)239;
long long int var_15 = -555026507749971291LL;
signed char var_16 = (signed char)-10;
unsigned long long int var_17 = 4046107740118463137ULL;
_Bool var_18 = (_Bool)0;
signed char arr_0 [18] ;
unsigned short arr_2 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (signed char)-127;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)64075;
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
