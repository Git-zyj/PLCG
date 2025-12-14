#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)82;
short var_6 = (short)-789;
int zero = 0;
unsigned int var_18 = 454237300U;
int var_19 = 1171696547;
unsigned char var_20 = (unsigned char)6;
signed char var_21 = (signed char)66;
unsigned short var_22 = (unsigned short)11186;
unsigned char var_23 = (unsigned char)125;
long long int var_24 = 1040227539253809604LL;
short var_25 = (short)-18457;
long long int arr_5 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 8956858538679008769LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
