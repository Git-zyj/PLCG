#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-99;
short var_1 = (short)-7001;
int var_2 = -706220139;
int var_4 = -1797329206;
unsigned char var_5 = (unsigned char)98;
_Bool var_6 = (_Bool)1;
short var_7 = (short)-4687;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 10573633037740308172ULL;
int var_11 = -1086768886;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned char var_13 = (unsigned char)127;
unsigned int var_14 = 203038906U;
int var_15 = 1772349168;
void init() {
}

void checksum() {
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
