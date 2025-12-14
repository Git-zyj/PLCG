#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3432538794017391608LL;
unsigned long long int var_4 = 5089693457564028460ULL;
signed char var_5 = (signed char)-17;
unsigned short var_6 = (unsigned short)47678;
int var_10 = 2050991006;
unsigned short var_11 = (unsigned short)37862;
int zero = 0;
long long int var_14 = 583791129630721004LL;
unsigned long long int var_15 = 7686939754546890211ULL;
unsigned long long int var_16 = 9326798489694287381ULL;
short var_17 = (short)29878;
signed char var_18 = (signed char)85;
long long int arr_0 [25] ;
signed char arr_4 [25] ;
short arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 3337942675565284834LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)125 : (signed char)-60;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)-16603 : (short)10044;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
