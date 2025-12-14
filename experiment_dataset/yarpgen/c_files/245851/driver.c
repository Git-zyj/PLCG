#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-10;
signed char var_1 = (signed char)18;
unsigned short var_2 = (unsigned short)6778;
_Bool var_4 = (_Bool)0;
int var_8 = -151336984;
_Bool var_12 = (_Bool)0;
short var_15 = (short)25431;
signed char var_18 = (signed char)-73;
int zero = 0;
int var_19 = -1196096356;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
