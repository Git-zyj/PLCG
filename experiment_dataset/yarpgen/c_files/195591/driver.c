#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3536594518U;
unsigned char var_3 = (unsigned char)41;
_Bool var_4 = (_Bool)0;
long long int var_5 = -8316581006144369048LL;
unsigned short var_6 = (unsigned short)11265;
signed char var_9 = (signed char)-96;
int zero = 0;
signed char var_10 = (signed char)-90;
unsigned int var_11 = 917806988U;
long long int var_12 = 2442466748923294393LL;
signed char arr_0 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-95;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
