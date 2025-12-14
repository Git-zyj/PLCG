#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-81;
int var_1 = -763445623;
int var_10 = -1607582947;
unsigned long long int var_12 = 6933055104685475043ULL;
int var_13 = -1115448764;
signed char var_14 = (signed char)-90;
int zero = 0;
unsigned long long int var_18 = 8978097589227367365ULL;
short var_19 = (short)-17457;
short var_20 = (short)5602;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
