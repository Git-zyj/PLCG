#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)27;
short var_7 = (short)14277;
signed char var_8 = (signed char)102;
short var_11 = (short)-10304;
short var_12 = (short)-31011;
short var_14 = (short)-5448;
short var_15 = (short)-11253;
int zero = 0;
signed char var_18 = (signed char)-109;
short var_19 = (short)7465;
short var_20 = (short)-24249;
signed char var_21 = (signed char)-52;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
