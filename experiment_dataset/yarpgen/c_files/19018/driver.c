#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1531316194139902121LL;
long long int var_2 = 2732849062757214511LL;
unsigned int var_4 = 3218269225U;
unsigned int var_6 = 3080600524U;
_Bool var_8 = (_Bool)0;
unsigned short var_10 = (unsigned short)50207;
int zero = 0;
unsigned long long int var_14 = 8266408613092899831ULL;
unsigned int var_15 = 955921380U;
unsigned short var_16 = (unsigned short)43011;
_Bool var_17 = (_Bool)0;
int var_18 = 776935663;
long long int var_19 = -5275992075784977123LL;
unsigned int var_20 = 1565357550U;
signed char var_21 = (signed char)-16;
unsigned int arr_11 [20] [20] [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? 206556609U : 4271497188U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
