#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62505;
unsigned int var_1 = 440851804U;
long long int var_2 = 8612806738479177834LL;
signed char var_4 = (signed char)-54;
short var_5 = (short)15529;
signed char var_6 = (signed char)-16;
int var_7 = -1230198030;
signed char var_9 = (signed char)-16;
int zero = 0;
int var_10 = -24114992;
signed char var_11 = (signed char)73;
unsigned short var_12 = (unsigned short)53052;
unsigned short var_13 = (unsigned short)60450;
unsigned long long int var_14 = 4307847303588212061ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
