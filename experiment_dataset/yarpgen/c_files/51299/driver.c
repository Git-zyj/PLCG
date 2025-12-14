#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-102;
long long int var_4 = 5891825087049811301LL;
int zero = 0;
unsigned short var_20 = (unsigned short)59991;
signed char var_21 = (signed char)127;
short var_22 = (short)-5337;
unsigned short var_23 = (unsigned short)8337;
long long int var_24 = 3345513819910059431LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
