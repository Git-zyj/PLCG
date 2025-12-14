#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25863;
unsigned long long int var_1 = 13161069680264327259ULL;
unsigned int var_2 = 2769315747U;
long long int var_3 = 3959841850540150787LL;
unsigned short var_4 = (unsigned short)23928;
unsigned short var_6 = (unsigned short)16401;
unsigned char var_8 = (unsigned char)108;
long long int var_9 = -5225911807818692726LL;
_Bool var_10 = (_Bool)1;
long long int var_11 = -3612248185049678205LL;
signed char var_12 = (signed char)120;
unsigned int var_13 = 3787548869U;
signed char var_15 = (signed char)-10;
int zero = 0;
long long int var_16 = 7675665011702832859LL;
short var_17 = (short)-6456;
long long int var_18 = 2062680640016579829LL;
unsigned short var_19 = (unsigned short)52591;
signed char var_20 = (signed char)46;
_Bool var_21 = (_Bool)0;
short var_22 = (short)14160;
unsigned int var_23 = 2105445705U;
unsigned int var_24 = 2547784659U;
_Bool var_25 = (_Bool)1;
short var_26 = (short)-25341;
unsigned int arr_4 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 3287229042U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
