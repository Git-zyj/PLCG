#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)61;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)56;
signed char var_12 = (signed char)-39;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)55883;
unsigned long long int var_19 = 8647218775240363110ULL;
int zero = 0;
signed char var_20 = (signed char)82;
int var_21 = -16672406;
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
