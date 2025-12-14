#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 766430120;
long long int var_4 = -8784746217315858015LL;
long long int var_9 = -1967133805122785294LL;
_Bool var_10 = (_Bool)0;
int var_11 = -373646441;
int zero = 0;
unsigned char var_12 = (unsigned char)180;
unsigned int var_13 = 1955017142U;
unsigned int var_14 = 1150779369U;
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
