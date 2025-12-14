#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)150;
unsigned int var_8 = 2300850048U;
_Bool var_9 = (_Bool)1;
long long int var_11 = -7141195458534193107LL;
int zero = 0;
unsigned int var_12 = 2909444280U;
int var_13 = -1458724963;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
