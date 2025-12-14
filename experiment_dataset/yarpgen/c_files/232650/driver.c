#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6816637884746809981ULL;
unsigned long long int var_1 = 4323202688636566972ULL;
int zero = 0;
short var_13 = (short)-4165;
unsigned short var_14 = (unsigned short)4737;
signed char var_15 = (signed char)49;
signed char var_16 = (signed char)-79;
signed char var_17 = (signed char)-54;
signed char arr_0 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (signed char)14;
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
