#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)45;
signed char var_10 = (signed char)-4;
short var_14 = (short)27517;
unsigned long long int var_16 = 13785978039659815459ULL;
unsigned char var_18 = (unsigned char)193;
long long int var_19 = -8862155007366934342LL;
int zero = 0;
short var_20 = (short)31054;
unsigned char var_21 = (unsigned char)21;
unsigned int var_22 = 4052052299U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
