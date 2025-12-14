#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)8236;
unsigned char var_3 = (unsigned char)90;
unsigned short var_8 = (unsigned short)22551;
long long int var_11 = -4305572704491027340LL;
signed char var_14 = (signed char)-37;
int zero = 0;
signed char var_19 = (signed char)84;
long long int var_20 = 2187699694262287593LL;
long long int var_21 = 6910335625178747513LL;
int var_22 = 2036797366;
unsigned short var_23 = (unsigned short)31948;
signed char arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (signed char)-58;
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
