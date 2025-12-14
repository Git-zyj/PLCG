#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7143753572905051776LL;
signed char var_2 = (signed char)-120;
unsigned short var_6 = (unsigned short)47285;
unsigned int var_9 = 2809418655U;
unsigned int var_11 = 2675898910U;
int zero = 0;
short var_13 = (short)-4490;
signed char var_14 = (signed char)35;
void init() {
}

void checksum() {
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
