#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -473459128;
signed char var_4 = (signed char)89;
unsigned char var_7 = (unsigned char)208;
unsigned char var_9 = (unsigned char)71;
unsigned int var_10 = 4181734171U;
int var_12 = -1770429856;
short var_17 = (short)32236;
int zero = 0;
unsigned int var_18 = 3546449899U;
signed char var_19 = (signed char)125;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)27729;
int arr_1 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 1523610978;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
