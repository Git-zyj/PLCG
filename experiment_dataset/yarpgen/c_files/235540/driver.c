#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)11;
signed char var_4 = (signed char)-15;
unsigned short var_8 = (unsigned short)17907;
_Bool var_10 = (_Bool)1;
short var_12 = (short)-9282;
unsigned char var_14 = (unsigned char)17;
unsigned long long int var_18 = 15606954752190442282ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)54391;
int var_20 = -346857175;
unsigned short var_21 = (unsigned short)63867;
short arr_3 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (short)25855;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
