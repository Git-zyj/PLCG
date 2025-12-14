#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2113884003;
unsigned long long int var_1 = 167850820637114523ULL;
short var_2 = (short)-15895;
signed char var_6 = (signed char)-93;
int var_7 = 677513707;
_Bool var_8 = (_Bool)0;
int var_9 = 1708715094;
short var_11 = (short)-11067;
int var_12 = -435988052;
signed char var_14 = (signed char)78;
long long int var_15 = 1300229254727477293LL;
int zero = 0;
int var_17 = 1571231149;
signed char var_18 = (signed char)-64;
int var_19 = 646299592;
short var_20 = (short)20113;
unsigned long long int var_21 = 14999813681899120231ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
