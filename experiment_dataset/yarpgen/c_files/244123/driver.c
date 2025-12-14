#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2106152682887354224LL;
unsigned int var_1 = 3902350596U;
short var_2 = (short)-26420;
_Bool var_3 = (_Bool)0;
short var_4 = (short)-30190;
short var_5 = (short)29867;
signed char var_6 = (signed char)-86;
signed char var_8 = (signed char)124;
signed char var_9 = (signed char)-76;
int zero = 0;
signed char var_12 = (signed char)-103;
int var_13 = 1971041358;
short var_14 = (short)2748;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
