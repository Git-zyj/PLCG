#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1563460098U;
signed char var_1 = (signed char)61;
unsigned short var_4 = (unsigned short)40009;
unsigned short var_5 = (unsigned short)21244;
int var_7 = -1930828303;
signed char var_9 = (signed char)-111;
long long int var_10 = 4350173496091839586LL;
unsigned long long int var_12 = 2880031085926989586ULL;
long long int var_14 = 4342283858614129361LL;
_Bool var_16 = (_Bool)0;
int zero = 0;
signed char var_18 = (signed char)-11;
long long int var_19 = 5565059677201737009LL;
short var_20 = (short)13698;
unsigned int var_21 = 1507128738U;
unsigned long long int var_22 = 10479256017081468068ULL;
unsigned short arr_0 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned short)21251;
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
