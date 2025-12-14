#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)180;
short var_1 = (short)22433;
signed char var_2 = (signed char)15;
short var_4 = (short)13808;
unsigned long long int var_5 = 16492877854814314382ULL;
unsigned int var_6 = 2176254581U;
int var_7 = 340467701;
unsigned char var_8 = (unsigned char)126;
unsigned int var_9 = 236605384U;
short var_10 = (short)4521;
unsigned char var_11 = (unsigned char)119;
int zero = 0;
int var_12 = 996038769;
unsigned int var_13 = 3377699748U;
int var_14 = -50764512;
unsigned int var_15 = 145045836U;
unsigned int var_16 = 2305595305U;
unsigned int var_17 = 3741281057U;
unsigned short arr_5 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (unsigned short)18005;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
