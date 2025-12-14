#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1853898889U;
signed char var_5 = (signed char)-11;
short var_7 = (short)-1102;
unsigned long long int var_9 = 13385706527843674510ULL;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-63;
signed char var_16 = (signed char)94;
int zero = 0;
signed char var_18 = (signed char)-6;
unsigned long long int var_19 = 14083782682797977673ULL;
signed char var_20 = (signed char)-15;
unsigned char var_21 = (unsigned char)90;
short var_22 = (short)-16882;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
