#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10336686656120705388ULL;
_Bool var_3 = (_Bool)1;
int var_4 = -1196197086;
unsigned short var_6 = (unsigned short)15699;
unsigned int var_7 = 3867499053U;
unsigned short var_8 = (unsigned short)48580;
unsigned char var_9 = (unsigned char)19;
unsigned int var_12 = 1032013889U;
int zero = 0;
unsigned char var_13 = (unsigned char)156;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-28874;
short var_16 = (short)2912;
int var_17 = 130967456;
unsigned int arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 1221361639U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
