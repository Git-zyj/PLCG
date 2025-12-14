#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-31;
unsigned char var_3 = (unsigned char)26;
int var_5 = 750730807;
short var_8 = (short)-8529;
signed char var_9 = (signed char)-39;
int zero = 0;
unsigned char var_16 = (unsigned char)69;
int var_17 = -1526844497;
int var_18 = 771566535;
signed char var_19 = (signed char)-92;
_Bool arr_1 [20] ;
signed char arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-105 : (signed char)-55;
}

void checksum() {
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
