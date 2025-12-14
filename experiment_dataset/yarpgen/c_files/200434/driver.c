#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6823;
unsigned long long int var_6 = 1373375851527443675ULL;
unsigned int var_10 = 4150532791U;
short var_14 = (short)-11561;
int zero = 0;
int var_20 = -1242473625;
signed char var_21 = (signed char)-37;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
