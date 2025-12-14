#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-21456;
_Bool var_2 = (_Bool)1;
unsigned short var_4 = (unsigned short)51577;
short var_5 = (short)-15123;
signed char var_6 = (signed char)20;
unsigned short var_7 = (unsigned short)555;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-3411;
int zero = 0;
unsigned int var_12 = 3192591687U;
unsigned long long int var_13 = 16094817615631818920ULL;
long long int var_14 = -5727449886481134356LL;
unsigned short var_15 = (unsigned short)58203;
void init() {
}

void checksum() {
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
