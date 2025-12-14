#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 9212151234492589916ULL;
unsigned long long int var_13 = 7115959502332814092ULL;
unsigned long long int var_14 = 1944772464169425112ULL;
int var_15 = -2141466900;
unsigned long long int var_16 = 12140738397120696868ULL;
int zero = 0;
signed char var_18 = (signed char)-27;
unsigned long long int var_19 = 3792235071439364922ULL;
unsigned short var_20 = (unsigned short)17528;
unsigned long long int var_21 = 17494463198243550423ULL;
unsigned long long int var_22 = 3472616276278181209ULL;
unsigned long long int var_23 = 11211047889782747539ULL;
long long int var_24 = 3650820444986745044LL;
unsigned short arr_1 [17] ;
unsigned long long int arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned short)30182;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 12218809812441565808ULL;
}

void checksum() {
    hash(&seed, var_18);
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
