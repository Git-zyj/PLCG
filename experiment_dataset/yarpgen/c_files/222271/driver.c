#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)37;
_Bool var_4 = (_Bool)1;
unsigned char var_8 = (unsigned char)196;
int zero = 0;
unsigned char var_15 = (unsigned char)94;
signed char var_16 = (signed char)47;
long long int var_17 = 5074382180412970418LL;
short var_18 = (short)11421;
signed char var_19 = (signed char)-90;
short arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (short)3312;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
