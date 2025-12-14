#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-4;
unsigned int var_3 = 3731487733U;
unsigned int var_4 = 1230921167U;
unsigned int var_5 = 2049108068U;
long long int var_8 = 2908829573610124187LL;
signed char var_9 = (signed char)-57;
int zero = 0;
unsigned long long int var_11 = 17011147857704861123ULL;
long long int var_12 = 2694707788460525253LL;
unsigned int var_13 = 1016993686U;
int var_14 = 273523044;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
