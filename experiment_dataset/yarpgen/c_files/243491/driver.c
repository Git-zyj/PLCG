#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_10 = (signed char)51;
short var_12 = (short)-26566;
short var_13 = (short)-20395;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned int var_19 = 3740995666U;
int var_20 = -1013127439;
signed char var_21 = (signed char)90;
signed char var_22 = (signed char)89;
void init() {
}

void checksum() {
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
