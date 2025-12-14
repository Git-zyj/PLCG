#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -589854581;
short var_1 = (short)-6608;
unsigned long long int var_4 = 5241667436425234622ULL;
int var_5 = 1887250441;
signed char var_7 = (signed char)-59;
unsigned int var_9 = 1500191817U;
short var_13 = (short)-23852;
short var_14 = (short)-4908;
int var_17 = 1680286028;
signed char var_18 = (signed char)1;
int zero = 0;
long long int var_19 = -7600676739241140987LL;
unsigned int var_20 = 2872706214U;
short var_21 = (short)29193;
void init() {
}

void checksum() {
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
