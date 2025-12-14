#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)85;
unsigned int var_6 = 3163162964U;
long long int var_7 = 3341183991934953976LL;
signed char var_10 = (signed char)1;
short var_11 = (short)-23048;
unsigned char var_13 = (unsigned char)13;
long long int var_15 = 3801544846147805266LL;
int zero = 0;
unsigned short var_18 = (unsigned short)52840;
unsigned long long int var_19 = 8811414940153589497ULL;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
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
