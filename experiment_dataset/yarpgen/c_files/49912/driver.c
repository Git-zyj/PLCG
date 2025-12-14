#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8782746851128959393LL;
_Bool var_1 = (_Bool)0;
long long int var_2 = 5078473237033138344LL;
long long int var_3 = 1397971966172958403LL;
unsigned short var_5 = (unsigned short)56953;
signed char var_6 = (signed char)52;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned long long int var_11 = 10599664869331530554ULL;
unsigned short var_12 = (unsigned short)29501;
signed char var_16 = (signed char)-40;
long long int var_17 = -2546645483390881234LL;
int zero = 0;
signed char var_19 = (signed char)113;
signed char var_20 = (signed char)-48;
long long int var_21 = 8607268537309903729LL;
signed char var_22 = (signed char)53;
signed char var_23 = (signed char)-21;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
