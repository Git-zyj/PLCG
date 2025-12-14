#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)80;
unsigned char var_7 = (unsigned char)23;
unsigned long long int var_9 = 11555001702721123269ULL;
unsigned long long int var_10 = 4034832701977413341ULL;
unsigned short var_12 = (unsigned short)59277;
int zero = 0;
long long int var_13 = 88427757358766356LL;
signed char var_14 = (signed char)-104;
long long int var_15 = -4601812451683547822LL;
short var_16 = (short)23567;
int var_17 = 2052955661;
void init() {
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
