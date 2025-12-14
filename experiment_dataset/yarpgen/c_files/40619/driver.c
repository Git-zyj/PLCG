#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-55;
unsigned int var_2 = 87316531U;
unsigned int var_3 = 3449437759U;
short var_4 = (short)4725;
signed char var_5 = (signed char)-24;
unsigned int var_7 = 1603476583U;
unsigned int var_9 = 2178917344U;
_Bool var_10 = (_Bool)1;
int zero = 0;
short var_12 = (short)-15225;
signed char var_13 = (signed char)106;
short var_14 = (short)6773;
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
