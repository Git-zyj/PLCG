#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 257123834;
int var_8 = -1080107133;
int var_9 = -114267472;
unsigned char var_10 = (unsigned char)172;
unsigned char var_13 = (unsigned char)116;
unsigned long long int var_15 = 6418729050151451807ULL;
unsigned char var_16 = (unsigned char)187;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)190;
unsigned char var_20 = (unsigned char)6;
unsigned long long int var_21 = 15006680911043198464ULL;
unsigned char var_22 = (unsigned char)22;
unsigned long long int arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 6605204849494475348ULL;
}

void checksum() {
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
