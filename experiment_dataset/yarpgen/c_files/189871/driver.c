#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)14113;
unsigned short var_6 = (unsigned short)35680;
signed char var_9 = (signed char)102;
int zero = 0;
long long int var_11 = 7382015562889519798LL;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-24034;
unsigned long long int var_14 = 11198492669392838475ULL;
void init() {
}

void checksum() {
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
