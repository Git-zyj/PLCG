#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 342717948991626096LL;
unsigned int var_1 = 1321678956U;
long long int var_2 = -5238972157596082880LL;
long long int var_6 = -1490735566790766549LL;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)125;
short var_9 = (short)8258;
int zero = 0;
long long int var_10 = -228835079916481470LL;
unsigned long long int var_11 = 13022258194242988023ULL;
unsigned short var_12 = (unsigned short)34306;
signed char arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (signed char)-29;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
