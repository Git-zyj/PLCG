#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)26758;
short var_2 = (short)15918;
long long int var_6 = -5733926526568514413LL;
signed char var_8 = (signed char)-57;
long long int var_9 = -5076921429917356918LL;
unsigned int var_13 = 542889548U;
unsigned short var_14 = (unsigned short)12025;
_Bool var_15 = (_Bool)0;
long long int var_19 = -5532900633181817586LL;
int zero = 0;
long long int var_20 = 2563143543943299465LL;
unsigned short var_21 = (unsigned short)20417;
void init() {
}

void checksum() {
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
