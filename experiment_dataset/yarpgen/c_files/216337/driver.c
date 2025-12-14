#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)38;
int var_2 = 1887726241;
short var_5 = (short)-7848;
unsigned long long int var_7 = 2172799370106297132ULL;
unsigned short var_9 = (unsigned short)54253;
unsigned long long int var_11 = 8365070794904342550ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)29267;
int var_14 = -1169034270;
int var_15 = -1681689081;
int var_16 = -2062901601;
unsigned long long int var_17 = 14246916637386122240ULL;
signed char arr_0 [10] [10] ;
unsigned long long int arr_1 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)47;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 6802560002447090162ULL;
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
