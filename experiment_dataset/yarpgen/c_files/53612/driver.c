#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1503676803;
short var_4 = (short)15044;
_Bool var_6 = (_Bool)1;
long long int var_7 = 6317772160556151285LL;
short var_9 = (short)3834;
int zero = 0;
signed char var_11 = (signed char)48;
unsigned short var_12 = (unsigned short)8001;
_Bool var_13 = (_Bool)1;
short var_14 = (short)1784;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
