#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)34;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-49;
signed char var_7 = (signed char)-127;
unsigned long long int var_10 = 8146853304783788186ULL;
int var_11 = 800743294;
unsigned long long int var_12 = 9958808622424647780ULL;
signed char var_13 = (signed char)-12;
int zero = 0;
int var_14 = -798181057;
signed char var_15 = (signed char)-25;
int var_16 = 1639612171;
int var_17 = -1176710362;
void init() {
}

void checksum() {
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
