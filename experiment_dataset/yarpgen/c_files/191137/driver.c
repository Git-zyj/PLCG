#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-79;
short var_5 = (short)28453;
short var_18 = (short)-9638;
int zero = 0;
unsigned long long int var_19 = 14938926950693952816ULL;
short var_20 = (short)20587;
unsigned char var_21 = (unsigned char)0;
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
