#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 87969059;
int var_4 = 887486119;
signed char var_8 = (signed char)-90;
signed char var_10 = (signed char)29;
_Bool var_11 = (_Bool)1;
int var_12 = -1487414890;
int zero = 0;
unsigned long long int var_16 = 11773372506935163866ULL;
unsigned short var_17 = (unsigned short)28584;
short var_18 = (short)-17821;
unsigned long long int var_19 = 3445179999969812459ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
