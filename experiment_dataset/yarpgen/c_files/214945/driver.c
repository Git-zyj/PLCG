#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)43;
unsigned short var_9 = (unsigned short)9203;
_Bool var_11 = (_Bool)0;
_Bool var_13 = (_Bool)0;
int var_14 = -575377678;
unsigned int var_17 = 4109455950U;
int var_19 = -1742447604;
int zero = 0;
unsigned short var_20 = (unsigned short)20886;
unsigned short var_21 = (unsigned short)7631;
signed char var_22 = (signed char)70;
unsigned int var_23 = 3157938042U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
