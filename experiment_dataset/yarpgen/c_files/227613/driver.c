#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)121;
signed char var_6 = (signed char)-82;
unsigned int var_9 = 3960851379U;
int var_12 = 732615337;
long long int var_18 = -359441847161763852LL;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = 2026998392;
unsigned short var_22 = (unsigned short)45254;
short var_23 = (short)-5076;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
