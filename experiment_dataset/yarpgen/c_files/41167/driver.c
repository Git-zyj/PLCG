#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)3457;
unsigned int var_7 = 1249871775U;
unsigned short var_8 = (unsigned short)3390;
int var_9 = -1530596552;
int zero = 0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-37;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
