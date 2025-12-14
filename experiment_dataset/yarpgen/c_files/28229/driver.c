#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11766612263808985526ULL;
short var_1 = (short)-27536;
long long int var_3 = 6494044048398624525LL;
int var_6 = 1833867587;
signed char var_7 = (signed char)-81;
short var_8 = (short)-31362;
signed char var_10 = (signed char)-38;
_Bool var_12 = (_Bool)1;
long long int var_13 = -6164626722299320076LL;
int var_14 = 1928457435;
signed char var_16 = (signed char)-58;
int zero = 0;
unsigned short var_17 = (unsigned short)60986;
long long int var_18 = -4001059721599592778LL;
unsigned int var_19 = 3542021613U;
unsigned int var_20 = 1624907104U;
unsigned char var_21 = (unsigned char)145;
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
