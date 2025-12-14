#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -284136073300088206LL;
_Bool var_9 = (_Bool)1;
int var_12 = 1473822215;
int zero = 0;
unsigned short var_17 = (unsigned short)64789;
signed char var_18 = (signed char)5;
signed char var_19 = (signed char)-19;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
