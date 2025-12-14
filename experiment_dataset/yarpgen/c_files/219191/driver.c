#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)21720;
signed char var_3 = (signed char)6;
signed char var_4 = (signed char)124;
long long int var_5 = -4137499598308356231LL;
int zero = 0;
int var_11 = 1814863712;
signed char var_12 = (signed char)-39;
int var_13 = 1764812886;
unsigned char var_14 = (unsigned char)137;
short var_15 = (short)198;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
