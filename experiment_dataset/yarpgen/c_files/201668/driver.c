#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)37427;
signed char var_11 = (signed char)33;
signed char var_12 = (signed char)81;
int zero = 0;
signed char var_13 = (signed char)-44;
long long int var_14 = 4369273127855638310LL;
short var_15 = (short)-4296;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
