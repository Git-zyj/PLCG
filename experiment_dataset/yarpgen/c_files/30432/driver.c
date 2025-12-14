#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)109;
signed char var_1 = (signed char)-79;
int var_3 = 1707341881;
signed char var_5 = (signed char)-10;
short var_6 = (short)32087;
unsigned int var_7 = 289795586U;
_Bool var_10 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)-121;
signed char var_14 = (signed char)-68;
unsigned int var_15 = 166428350U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
