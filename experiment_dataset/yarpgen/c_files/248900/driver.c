#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4045711745U;
signed char var_2 = (signed char)40;
signed char var_3 = (signed char)57;
_Bool var_4 = (_Bool)1;
int var_6 = 1533728843;
signed char var_10 = (signed char)75;
int zero = 0;
signed char var_11 = (signed char)-52;
signed char var_12 = (signed char)125;
unsigned int var_13 = 3120022959U;
void init() {
}

void checksum() {
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
