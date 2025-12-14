#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)92;
long long int var_7 = 7556073584672141607LL;
short var_8 = (short)9409;
unsigned short var_9 = (unsigned short)37970;
long long int var_11 = -7382073032645766775LL;
int zero = 0;
signed char var_13 = (signed char)-15;
unsigned short var_14 = (unsigned short)8558;
signed char var_15 = (signed char)-41;
void init() {
}

void checksum() {
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
