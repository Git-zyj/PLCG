#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1103868315719546151LL;
unsigned char var_2 = (unsigned char)186;
unsigned char var_5 = (unsigned char)181;
unsigned short var_7 = (unsigned short)4926;
int zero = 0;
unsigned short var_18 = (unsigned short)46855;
unsigned char var_19 = (unsigned char)170;
unsigned char var_20 = (unsigned char)30;
unsigned long long int var_21 = 13257227292732675468ULL;
unsigned short var_22 = (unsigned short)5223;
signed char var_23 = (signed char)93;
unsigned short arr_1 [10] ;
signed char arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned short)41151;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (signed char)117;
}

void checksum() {
    hash(&seed, var_18);
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
