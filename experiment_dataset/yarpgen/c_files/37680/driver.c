#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-121;
signed char var_8 = (signed char)125;
int zero = 0;
long long int var_11 = -7110717495905138331LL;
int var_12 = -914695649;
unsigned long long int var_13 = 15544199076019644659ULL;
short var_14 = (short)-18174;
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
