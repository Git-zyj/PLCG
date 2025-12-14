#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-25;
signed char var_2 = (signed char)-123;
unsigned char var_4 = (unsigned char)199;
unsigned char var_5 = (unsigned char)254;
int var_11 = -1777734619;
long long int var_12 = -8230041711210686975LL;
int zero = 0;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)5;
unsigned char var_18 = (unsigned char)128;
unsigned char var_19 = (unsigned char)222;
signed char var_20 = (signed char)-26;
unsigned short var_21 = (unsigned short)8397;
long long int var_22 = 1041159593563419865LL;
long long int arr_0 [13] ;
int arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 8089862280883929880LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 1297250707;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
