#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14327359028552157950ULL;
long long int var_8 = -8973624756511110403LL;
_Bool var_9 = (_Bool)0;
short var_18 = (short)5263;
int zero = 0;
long long int var_20 = -1452218297325078759LL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
