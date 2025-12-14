#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 5876958203602970546ULL;
signed char var_5 = (signed char)94;
unsigned short var_6 = (unsigned short)32702;
_Bool var_14 = (_Bool)0;
int zero = 0;
short var_15 = (short)-1721;
unsigned long long int var_16 = 5495513091647176714ULL;
long long int var_17 = -1449358239343742801LL;
signed char var_18 = (signed char)-73;
unsigned long long int var_19 = 5308480963524838615ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
