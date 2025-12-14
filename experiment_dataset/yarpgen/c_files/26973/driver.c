#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)5;
_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)1;
long long int var_5 = -5814673378489540806LL;
long long int var_6 = 1234314577991458911LL;
unsigned short var_7 = (unsigned short)6932;
unsigned long long int var_8 = 6958063028871887429ULL;
unsigned long long int var_9 = 18336887424262168311ULL;
unsigned short var_10 = (unsigned short)8166;
int zero = 0;
short var_11 = (short)6106;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 16896852474489187220ULL;
int var_14 = -1768776588;
long long int var_15 = -4981518904110017897LL;
int var_16 = -1545033975;
unsigned short var_17 = (unsigned short)58706;
unsigned int var_18 = 1841304629U;
_Bool arr_14 [16] [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
