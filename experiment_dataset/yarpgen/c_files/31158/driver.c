#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3365638540U;
short var_2 = (short)22285;
unsigned short var_3 = (unsigned short)64429;
unsigned int var_4 = 4050981773U;
unsigned int var_5 = 284718755U;
int zero = 0;
unsigned char var_11 = (unsigned char)58;
unsigned short var_12 = (unsigned short)13994;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 2117306149U;
long long int var_15 = 5620517872529309532LL;
signed char arr_0 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (signed char)-55;
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
