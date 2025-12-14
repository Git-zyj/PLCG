#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7033476231853255953LL;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)-36;
unsigned char var_8 = (unsigned char)98;
signed char var_9 = (signed char)28;
long long int var_10 = 506926112268421788LL;
signed char var_11 = (signed char)-15;
long long int var_14 = 792442193713550186LL;
signed char var_15 = (signed char)-37;
signed char var_19 = (signed char)-89;
int zero = 0;
signed char var_20 = (signed char)-117;
unsigned char var_21 = (unsigned char)21;
signed char var_22 = (signed char)-53;
unsigned long long int var_23 = 11387055532534477236ULL;
unsigned char var_24 = (unsigned char)60;
_Bool var_25 = (_Bool)0;
int var_26 = -1200063881;
int var_27 = 12314256;
signed char arr_0 [23] ;
unsigned short arr_1 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (signed char)-41;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)504;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
