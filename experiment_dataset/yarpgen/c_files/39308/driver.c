#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46865;
short var_1 = (short)7069;
short var_2 = (short)-23426;
unsigned long long int var_3 = 8526955068295583351ULL;
_Bool var_4 = (_Bool)1;
short var_5 = (short)-21951;
unsigned long long int var_7 = 12308649158166009085ULL;
unsigned int var_8 = 3377765743U;
unsigned char var_10 = (unsigned char)3;
unsigned char var_13 = (unsigned char)135;
long long int var_14 = 1206706679678998597LL;
_Bool var_15 = (_Bool)0;
int zero = 0;
signed char var_18 = (signed char)64;
_Bool var_19 = (_Bool)0;
short var_20 = (short)27104;
signed char var_21 = (signed char)-116;
unsigned long long int var_22 = 3084338023299667583ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
