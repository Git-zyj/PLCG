#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-82;
long long int var_7 = -4669629236927348865LL;
short var_8 = (short)7257;
long long int var_9 = 8943104666247009592LL;
short var_11 = (short)32191;
signed char var_14 = (signed char)57;
short var_16 = (short)20784;
int zero = 0;
signed char var_17 = (signed char)-16;
long long int var_18 = -766365437008496978LL;
long long int var_19 = -1240060083355199326LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
