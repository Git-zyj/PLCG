#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)149;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 1531722856U;
signed char var_3 = (signed char)68;
int var_4 = 1290412538;
unsigned long long int var_6 = 11873034501687870372ULL;
short var_7 = (short)7326;
unsigned short var_9 = (unsigned short)15984;
unsigned long long int var_10 = 14741192484176941229ULL;
unsigned short var_13 = (unsigned short)64708;
unsigned char var_15 = (unsigned char)69;
unsigned short var_16 = (unsigned short)1416;
short var_17 = (short)21518;
int zero = 0;
signed char var_18 = (signed char)-92;
int var_19 = -1449099868;
unsigned short var_20 = (unsigned short)49021;
int var_21 = -251024409;
void init() {
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
