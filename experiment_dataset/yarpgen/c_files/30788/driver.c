#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1000613637940946539LL;
short var_1 = (short)-18308;
signed char var_2 = (signed char)103;
signed char var_5 = (signed char)-69;
unsigned int var_7 = 4052185666U;
short var_8 = (short)710;
long long int var_9 = 5373779422795081393LL;
int zero = 0;
_Bool var_11 = (_Bool)1;
int var_12 = -1831050237;
unsigned char var_13 = (unsigned char)107;
unsigned char var_14 = (unsigned char)147;
unsigned char var_15 = (unsigned char)219;
_Bool var_16 = (_Bool)1;
int var_17 = -135074602;
unsigned char var_18 = (unsigned char)57;
signed char var_19 = (signed char)-15;
short var_20 = (short)6583;
short var_21 = (short)28674;
int arr_3 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = -998233080;
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
