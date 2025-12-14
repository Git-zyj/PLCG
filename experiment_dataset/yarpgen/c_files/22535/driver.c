#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1586380020U;
unsigned long long int var_6 = 10440479530604065463ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_16 = (signed char)-55;
short var_17 = (short)-26562;
unsigned short var_18 = (unsigned short)60393;
unsigned long long int var_19 = 9839092107241053894ULL;
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
