#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)136;
unsigned long long int var_5 = 15702689484728308257ULL;
unsigned int var_6 = 3505879807U;
unsigned int var_8 = 363260009U;
_Bool var_9 = (_Bool)1;
short var_10 = (short)28835;
short var_12 = (short)25465;
int zero = 0;
short var_13 = (short)14752;
unsigned int var_14 = 4048668332U;
void init() {
}

void checksum() {
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
