#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)8;
unsigned short var_5 = (unsigned short)40899;
_Bool var_6 = (_Bool)0;
unsigned long long int var_8 = 18164399826525815147ULL;
unsigned short var_11 = (unsigned short)52151;
int var_15 = -952114495;
int zero = 0;
short var_18 = (short)7569;
int var_19 = 442367118;
void init() {
}

void checksum() {
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
