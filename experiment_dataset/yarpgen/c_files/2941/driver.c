#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = -8331204469560914359LL;
long long int var_3 = -3912288081801741037LL;
unsigned int var_5 = 3404788757U;
_Bool var_9 = (_Bool)0;
int var_14 = 65178754;
unsigned short var_15 = (unsigned short)57128;
int zero = 0;
int var_19 = -1667443650;
unsigned int var_20 = 3247441224U;
unsigned short var_21 = (unsigned short)13523;
signed char var_22 = (signed char)28;
int var_23 = -220150284;
unsigned short var_24 = (unsigned short)46787;
short arr_0 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (short)-11845;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
