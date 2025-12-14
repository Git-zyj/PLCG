#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5923729778711936758ULL;
unsigned short var_2 = (unsigned short)49087;
signed char var_13 = (signed char)-40;
unsigned short var_19 = (unsigned short)6879;
int zero = 0;
unsigned long long int var_20 = 2718040047934586338ULL;
unsigned int var_21 = 241060112U;
unsigned short var_22 = (unsigned short)62188;
signed char var_23 = (signed char)123;
unsigned char var_24 = (unsigned char)35;
long long int arr_0 [17] [17] ;
signed char arr_1 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 8173436462938048205LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (signed char)64;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
