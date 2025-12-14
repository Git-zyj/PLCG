#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46480;
unsigned long long int var_6 = 8444418090174045257ULL;
unsigned short var_9 = (unsigned short)61540;
int zero = 0;
signed char var_15 = (signed char)-114;
short var_16 = (short)25396;
unsigned long long int var_17 = 12729537456223453615ULL;
short arr_1 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)9423 : (short)6947;
}

void checksum() {
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
