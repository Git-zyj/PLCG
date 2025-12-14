#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-25;
unsigned long long int var_1 = 16818016725233202491ULL;
unsigned char var_4 = (unsigned char)86;
signed char var_9 = (signed char)-16;
int var_11 = -683222351;
unsigned char var_14 = (unsigned char)220;
unsigned int var_16 = 2722250846U;
int zero = 0;
signed char var_18 = (signed char)96;
short var_19 = (short)-11158;
signed char var_20 = (signed char)-42;
unsigned char var_21 = (unsigned char)96;
unsigned char var_22 = (unsigned char)90;
_Bool arr_0 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
