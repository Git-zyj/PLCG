#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-1;
long long int var_2 = -2119643571789819682LL;
int var_6 = 1594640891;
signed char var_8 = (signed char)-4;
signed char var_9 = (signed char)25;
int var_10 = 75384754;
int zero = 0;
int var_11 = 713481179;
int var_12 = -1157507426;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
