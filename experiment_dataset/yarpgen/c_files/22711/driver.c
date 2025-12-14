#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15758;
_Bool var_1 = (_Bool)1;
signed char var_3 = (signed char)-50;
signed char var_5 = (signed char)120;
int var_6 = -353766054;
int var_7 = 2113834698;
unsigned long long int var_8 = 1052722412768149665ULL;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-31;
int zero = 0;
unsigned short var_11 = (unsigned short)44612;
signed char var_12 = (signed char)43;
unsigned short var_13 = (unsigned short)18265;
unsigned long long int var_14 = 15909653937960059709ULL;
int var_15 = -768669332;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
