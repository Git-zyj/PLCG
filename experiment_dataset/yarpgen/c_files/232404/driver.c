#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15408683812419695224ULL;
short var_1 = (short)28986;
unsigned short var_3 = (unsigned short)48109;
long long int var_5 = -4642497959343089600LL;
int var_6 = -1328440635;
unsigned long long int var_10 = 15380460422443099523ULL;
short var_13 = (short)18129;
short var_16 = (short)4900;
int var_18 = 1758107180;
int zero = 0;
signed char var_20 = (signed char)-54;
signed char var_21 = (signed char)66;
signed char var_22 = (signed char)74;
void init() {
}

void checksum() {
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
