#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1404773518;
int var_1 = -984711523;
short var_3 = (short)-7899;
_Bool var_5 = (_Bool)0;
int var_7 = 1413432867;
signed char var_8 = (signed char)-120;
signed char var_11 = (signed char)113;
int zero = 0;
signed char var_12 = (signed char)-29;
signed char var_13 = (signed char)25;
unsigned char var_14 = (unsigned char)68;
int var_15 = -2107914859;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
