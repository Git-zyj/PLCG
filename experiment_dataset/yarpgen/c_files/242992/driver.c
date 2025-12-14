#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3875653772577696623LL;
long long int var_6 = 7949395619876179333LL;
long long int var_7 = -8253148745701782802LL;
unsigned int var_8 = 1959427583U;
int zero = 0;
long long int var_12 = 4781784118658433323LL;
long long int var_13 = -8292264171601001739LL;
unsigned short var_14 = (unsigned short)63500;
unsigned int var_15 = 2978625013U;
unsigned int var_16 = 123181063U;
short arr_0 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (short)23282;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
