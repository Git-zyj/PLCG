#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)53;
_Bool var_2 = (_Bool)0;
unsigned int var_5 = 2269053455U;
unsigned long long int var_9 = 3766763451558145844ULL;
int zero = 0;
long long int var_16 = -9210305794733829719LL;
signed char var_17 = (signed char)-121;
unsigned int var_18 = 1118608664U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
