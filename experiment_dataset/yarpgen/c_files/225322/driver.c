#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)50;
int var_5 = 1107393402;
short var_8 = (short)-5079;
short var_9 = (short)7913;
signed char var_10 = (signed char)97;
unsigned char var_13 = (unsigned char)143;
unsigned short var_14 = (unsigned short)28159;
int zero = 0;
short var_16 = (short)-12260;
long long int var_17 = 1148350236470175443LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
