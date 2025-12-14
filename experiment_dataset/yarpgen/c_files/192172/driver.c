#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 845100114U;
_Bool var_1 = (_Bool)0;
long long int var_2 = -1204298153197301242LL;
int var_3 = 1720638119;
signed char var_4 = (signed char)-97;
signed char var_5 = (signed char)-54;
unsigned long long int var_6 = 15329884766166126282ULL;
signed char var_7 = (signed char)89;
signed char var_8 = (signed char)-12;
signed char var_9 = (signed char)96;
int zero = 0;
unsigned int var_10 = 421844138U;
int var_11 = -555233968;
int var_12 = -699771061;
short var_13 = (short)20940;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
