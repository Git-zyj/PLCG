#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)91;
unsigned char var_3 = (unsigned char)92;
int var_7 = 815505967;
signed char var_9 = (signed char)-58;
short var_14 = (short)-19127;
int zero = 0;
long long int var_19 = -5873197684044829490LL;
short var_20 = (short)-25383;
unsigned char var_21 = (unsigned char)165;
void init() {
}

void checksum() {
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
