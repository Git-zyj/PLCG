#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)25163;
signed char var_2 = (signed char)-18;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)171;
long long int var_5 = 8116638066489322638LL;
int var_7 = 1843299566;
signed char var_9 = (signed char)7;
int zero = 0;
unsigned long long int var_10 = 17473671943534965348ULL;
short var_11 = (short)19339;
unsigned int var_12 = 3544604157U;
long long int var_13 = -181023704394719LL;
signed char arr_6 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (signed char)-113;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
