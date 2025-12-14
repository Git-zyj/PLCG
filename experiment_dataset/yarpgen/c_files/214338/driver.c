#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5438497636881467851ULL;
unsigned char var_2 = (unsigned char)201;
_Bool var_6 = (_Bool)1;
signed char var_8 = (signed char)63;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)-18;
long long int var_12 = -4057603122197838024LL;
int zero = 0;
unsigned long long int var_14 = 2924952123424096365ULL;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 6860722804207353889ULL;
int var_17 = 1922979320;
unsigned char arr_1 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)131 : (unsigned char)196;
}

void checksum() {
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
