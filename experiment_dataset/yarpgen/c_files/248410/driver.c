#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3618386081U;
int var_1 = 1506648215;
long long int var_2 = 7882053523740500412LL;
int var_3 = -486922153;
int var_4 = 376712073;
unsigned int var_5 = 451396181U;
long long int var_6 = -3704007855418116842LL;
long long int var_8 = 7939906632282352984LL;
unsigned char var_9 = (unsigned char)209;
unsigned int var_10 = 1635322566U;
unsigned int var_11 = 1331794566U;
int zero = 0;
int var_12 = 2019458630;
int var_13 = -1139245161;
int var_14 = 99733041;
int var_15 = -1414109999;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
