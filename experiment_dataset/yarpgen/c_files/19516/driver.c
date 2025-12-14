#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)29300;
unsigned int var_2 = 3037534071U;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
long long int var_6 = -1365893895922284696LL;
long long int var_7 = 290322755839787543LL;
int var_9 = 610270010;
unsigned char var_14 = (unsigned char)213;
int zero = 0;
unsigned char var_16 = (unsigned char)76;
long long int var_17 = -5315606503181720815LL;
unsigned int var_18 = 842447353U;
long long int arr_2 [21] ;
unsigned short arr_6 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = -341033466161186751LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)22821;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
