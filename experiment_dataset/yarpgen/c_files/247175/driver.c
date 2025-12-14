#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_4 = -2784418837760724862LL;
unsigned int var_6 = 240560567U;
unsigned short var_7 = (unsigned short)5075;
long long int var_9 = -4503371284708905139LL;
_Bool var_13 = (_Bool)0;
int var_14 = -1902798953;
int zero = 0;
signed char var_20 = (signed char)-18;
unsigned short var_21 = (unsigned short)39520;
unsigned int var_22 = 4019642707U;
long long int var_23 = 786296367837189404LL;
signed char var_24 = (signed char)-54;
unsigned int var_25 = 2806277647U;
int arr_2 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = -1211765791;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
