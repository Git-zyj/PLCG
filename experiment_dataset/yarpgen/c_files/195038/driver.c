#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1991075850;
int var_5 = -621727005;
unsigned int var_11 = 411522412U;
signed char var_12 = (signed char)-80;
unsigned long long int var_13 = 3458052990330928513ULL;
unsigned char var_18 = (unsigned char)151;
int zero = 0;
int var_19 = 1357968677;
unsigned char var_20 = (unsigned char)226;
_Bool var_21 = (_Bool)0;
int var_22 = 1774167647;
int var_23 = 188375911;
unsigned char var_24 = (unsigned char)25;
_Bool var_25 = (_Bool)0;
unsigned char var_26 = (unsigned char)133;
signed char var_27 = (signed char)-78;
short var_28 = (short)-18784;
int var_29 = -1619193557;
short var_30 = (short)-11889;
unsigned long long int var_31 = 3995157058485308588ULL;
signed char var_32 = (signed char)85;
signed char var_33 = (signed char)118;
unsigned int var_34 = 3959112346U;
unsigned char arr_0 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)115 : (unsigned char)105;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
