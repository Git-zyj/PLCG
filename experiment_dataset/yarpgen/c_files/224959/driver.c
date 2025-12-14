#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2107278645U;
unsigned int var_6 = 2881871940U;
unsigned short var_10 = (unsigned short)22400;
signed char var_13 = (signed char)119;
int zero = 0;
signed char var_20 = (signed char)116;
long long int var_21 = 4226094719876675462LL;
signed char var_22 = (signed char)-110;
signed char var_23 = (signed char)51;
unsigned short arr_0 [20] ;
int arr_1 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned short)15917;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 86956475;
}

void checksum() {
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
