#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_3 = 13331876598081443160ULL;
signed char var_4 = (signed char)53;
int var_5 = -1124458125;
int var_7 = 1377811468;
long long int var_8 = 874631481181018329LL;
long long int var_9 = -714604716599599157LL;
long long int var_10 = 4836909330723509344LL;
unsigned long long int var_11 = 9778318595176930427ULL;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)252;
signed char var_18 = (signed char)118;
signed char var_19 = (signed char)22;
short var_20 = (short)-20683;
unsigned long long int var_21 = 15249156854518130060ULL;
signed char var_22 = (signed char)-45;
_Bool var_23 = (_Bool)0;
unsigned char arr_0 [18] [18] ;
unsigned char arr_1 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)255;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned char)166;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
