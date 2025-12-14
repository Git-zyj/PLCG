#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26614;
signed char var_1 = (signed char)-124;
unsigned long long int var_3 = 2923802217318541076ULL;
unsigned int var_5 = 368409258U;
short var_6 = (short)5785;
short var_12 = (short)910;
unsigned char var_13 = (unsigned char)123;
int var_14 = -332782529;
unsigned long long int var_17 = 14164779725676683449ULL;
int zero = 0;
short var_19 = (short)-14229;
unsigned long long int var_20 = 13853285867813463034ULL;
unsigned int var_21 = 1221142880U;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)1;
unsigned int arr_0 [18] [18] ;
unsigned short arr_6 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 254406576U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (unsigned short)62309;
}

void checksum() {
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
