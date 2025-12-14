#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1524;
short var_2 = (short)-8990;
unsigned short var_3 = (unsigned short)59657;
_Bool var_10 = (_Bool)0;
int var_13 = 1702340415;
unsigned long long int var_14 = 198595440725059406ULL;
int zero = 0;
short var_15 = (short)22454;
signed char var_16 = (signed char)13;
unsigned long long int var_17 = 15801175541747008647ULL;
long long int var_18 = -2523452552442188610LL;
long long int var_19 = -2241365093260518343LL;
signed char var_20 = (signed char)85;
unsigned int arr_6 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1653179250U : 368985478U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
