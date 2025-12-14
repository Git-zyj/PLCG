#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)14150;
long long int var_8 = -2634951906632312651LL;
int zero = 0;
unsigned int var_16 = 1842194377U;
unsigned short var_17 = (unsigned short)54072;
unsigned char var_18 = (unsigned char)37;
unsigned int var_19 = 581034739U;
signed char var_20 = (signed char)-19;
unsigned long long int arr_0 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 3176264408530716675ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
