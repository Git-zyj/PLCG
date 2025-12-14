#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)31118;
unsigned char var_3 = (unsigned char)208;
unsigned long long int var_4 = 5011686224171885011ULL;
unsigned long long int var_7 = 926952044399331201ULL;
_Bool var_8 = (_Bool)1;
int zero = 0;
short var_10 = (short)-19851;
unsigned char var_11 = (unsigned char)27;
int var_12 = -786253483;
unsigned char var_13 = (unsigned char)94;
unsigned char arr_1 [21] ;
unsigned char arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned char)221;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned char)182;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
