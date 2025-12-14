#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)5077;
long long int var_2 = 2488243710057572524LL;
unsigned int var_3 = 2266645370U;
short var_6 = (short)-29943;
unsigned short var_13 = (unsigned short)32408;
unsigned short var_14 = (unsigned short)21593;
unsigned short var_15 = (unsigned short)48654;
unsigned int var_16 = 1899722757U;
int zero = 0;
unsigned long long int var_17 = 2538453221862973384ULL;
unsigned int var_18 = 2722210230U;
short var_19 = (short)15872;
long long int var_20 = 8004734339721770144LL;
_Bool var_21 = (_Bool)1;
unsigned short arr_2 [20] ;
_Bool arr_3 [20] ;
long long int arr_5 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned short)39186;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -5074183167253916367LL : -5983777644497176199LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
