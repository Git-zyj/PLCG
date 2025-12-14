#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -584338621;
long long int var_1 = 4527714464342073299LL;
signed char var_4 = (signed char)-86;
long long int var_9 = 5289829728278772516LL;
unsigned int var_10 = 1004647620U;
int zero = 0;
short var_12 = (short)3547;
long long int var_13 = -6775379226876846899LL;
void init() {
}

void checksum() {
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
