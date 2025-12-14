#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1466230323U;
long long int var_1 = -8461993929498355201LL;
signed char var_2 = (signed char)-55;
unsigned int var_3 = 2342360436U;
short var_6 = (short)22421;
unsigned long long int var_8 = 9274953171551229170ULL;
unsigned long long int var_10 = 15407330690907539967ULL;
signed char var_11 = (signed char)-67;
int zero = 0;
signed char var_12 = (signed char)113;
unsigned long long int var_13 = 14069273519181412317ULL;
unsigned long long int var_14 = 4513008531763639316ULL;
unsigned int var_15 = 2060674767U;
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
