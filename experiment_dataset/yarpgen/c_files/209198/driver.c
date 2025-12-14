#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14084271143824711305ULL;
int var_4 = -249310781;
unsigned short var_8 = (unsigned short)41295;
unsigned short var_13 = (unsigned short)14395;
unsigned char var_15 = (unsigned char)176;
int zero = 0;
short var_18 = (short)-6632;
unsigned char var_19 = (unsigned char)252;
long long int var_20 = -7879479974068264205LL;
unsigned int var_21 = 422395657U;
signed char arr_2 [16] [16] ;
short arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-24;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (short)10936;
}

void checksum() {
    hash(&seed, var_18);
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
