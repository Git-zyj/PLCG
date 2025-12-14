#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30206;
signed char var_4 = (signed char)91;
signed char var_9 = (signed char)77;
short var_16 = (short)25309;
int zero = 0;
signed char var_20 = (signed char)-90;
short var_21 = (short)25526;
signed char var_22 = (signed char)57;
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
