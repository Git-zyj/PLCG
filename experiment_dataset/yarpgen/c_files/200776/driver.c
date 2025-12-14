#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)57;
long long int var_1 = 578507448219376245LL;
unsigned long long int var_4 = 10025973096032532171ULL;
signed char var_6 = (signed char)83;
long long int var_8 = -3501830886350547890LL;
signed char var_9 = (signed char)-17;
int zero = 0;
signed char var_10 = (signed char)-123;
int var_11 = 757979070;
short var_12 = (short)-18661;
signed char var_13 = (signed char)-113;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
