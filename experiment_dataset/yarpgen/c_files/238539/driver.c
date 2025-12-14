#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)51986;
signed char var_7 = (signed char)114;
short var_10 = (short)22;
unsigned short var_11 = (unsigned short)29309;
int zero = 0;
unsigned short var_12 = (unsigned short)4971;
unsigned long long int var_13 = 15226594160261598114ULL;
unsigned long long int var_14 = 437957212836378190ULL;
signed char var_15 = (signed char)-107;
int arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 342034362;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
