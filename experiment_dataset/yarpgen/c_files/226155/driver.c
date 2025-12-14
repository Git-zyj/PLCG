#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6048763304089030072ULL;
signed char var_3 = (signed char)-90;
unsigned int var_4 = 2098608760U;
unsigned int var_5 = 674134942U;
long long int var_12 = 5693942358392846671LL;
unsigned int var_14 = 1391766363U;
int zero = 0;
unsigned long long int var_15 = 106662867792620675ULL;
signed char var_16 = (signed char)-110;
short var_17 = (short)-10681;
long long int var_18 = -5324329248763535709LL;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)39562;
unsigned int var_21 = 1557989024U;
int arr_0 [12] ;
unsigned short arr_1 [12] ;
signed char arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 1524685657 : -1346234269;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned short)41858;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-29 : (signed char)105;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
