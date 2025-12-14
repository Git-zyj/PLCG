#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5789309018840563829LL;
unsigned long long int var_6 = 16382648981417138559ULL;
signed char var_12 = (signed char)(-127 - 1);
long long int var_18 = 269373033595776011LL;
int zero = 0;
signed char var_20 = (signed char)-93;
signed char var_21 = (signed char)35;
short var_22 = (short)-25325;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
