#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)127;
unsigned int var_5 = 1327065360U;
int var_6 = -443630874;
short var_7 = (short)22981;
short var_9 = (short)14271;
int var_11 = -1790207365;
_Bool var_13 = (_Bool)0;
int zero = 0;
signed char var_17 = (signed char)-93;
signed char var_18 = (signed char)-6;
int var_19 = -1318033201;
signed char var_20 = (signed char)-13;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
