#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16522544252261675172ULL;
long long int var_3 = 672828254148759809LL;
unsigned int var_4 = 542356675U;
unsigned char var_10 = (unsigned char)5;
short var_12 = (short)6769;
long long int var_14 = -2023829211700057062LL;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = 3384451499101198395LL;
unsigned short var_21 = (unsigned short)32928;
void init() {
}

void checksum() {
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
