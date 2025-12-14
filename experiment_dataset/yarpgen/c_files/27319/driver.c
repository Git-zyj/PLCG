#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3292584614U;
unsigned int var_2 = 1500242042U;
signed char var_4 = (signed char)61;
unsigned int var_5 = 818946408U;
long long int var_6 = 1669357417716218908LL;
unsigned char var_7 = (unsigned char)183;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)1584;
unsigned short var_10 = (unsigned short)34419;
int zero = 0;
int var_11 = 1003773441;
signed char var_12 = (signed char)-40;
long long int var_13 = 3527015819893188163LL;
unsigned short var_14 = (unsigned short)22188;
int var_15 = -1424320980;
unsigned long long int arr_1 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 10135240764338467377ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
