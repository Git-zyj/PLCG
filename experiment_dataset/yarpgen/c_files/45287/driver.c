#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2738701923U;
short var_9 = (short)9283;
unsigned char var_10 = (unsigned char)180;
unsigned char var_11 = (unsigned char)149;
int zero = 0;
long long int var_12 = -8620979319971874434LL;
_Bool var_13 = (_Bool)0;
int var_14 = -205893492;
void init() {
}

void checksum() {
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
