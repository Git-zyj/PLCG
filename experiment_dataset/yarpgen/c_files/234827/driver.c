#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 358944371;
_Bool var_3 = (_Bool)1;
unsigned short var_7 = (unsigned short)40743;
unsigned short var_9 = (unsigned short)15463;
unsigned short var_12 = (unsigned short)42953;
int var_16 = 1146875674;
int zero = 0;
short var_17 = (short)21533;
short var_18 = (short)8933;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
