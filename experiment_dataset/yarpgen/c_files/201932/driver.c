#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)33;
long long int var_1 = -2118537513880371953LL;
unsigned short var_2 = (unsigned short)10676;
unsigned char var_5 = (unsigned char)87;
short var_6 = (short)-6880;
long long int var_9 = 5483451963938805479LL;
int zero = 0;
unsigned int var_10 = 780543369U;
unsigned long long int var_11 = 5335225161419324537ULL;
short var_12 = (short)15486;
long long int var_13 = -3795551261686836265LL;
signed char var_14 = (signed char)-101;
short arr_3 [16] ;
_Bool arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (short)16347;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
