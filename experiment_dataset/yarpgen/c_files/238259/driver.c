#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)89;
_Bool var_6 = (_Bool)1;
unsigned short var_9 = (unsigned short)32236;
long long int var_14 = 5657632374684394527LL;
int zero = 0;
unsigned short var_15 = (unsigned short)36730;
unsigned short var_16 = (unsigned short)34388;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
