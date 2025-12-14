#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)40319;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)40;
unsigned int var_10 = 870890084U;
unsigned int var_12 = 1739346714U;
unsigned long long int var_14 = 457738154498872082ULL;
unsigned long long int var_15 = 6162072271184447524ULL;
int zero = 0;
unsigned int var_19 = 469397549U;
unsigned short var_20 = (unsigned short)61645;
signed char var_21 = (signed char)-24;
_Bool var_22 = (_Bool)0;
signed char arr_3 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)110;
}

void checksum() {
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
