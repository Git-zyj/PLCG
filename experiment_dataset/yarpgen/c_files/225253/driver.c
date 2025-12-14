#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)(-127 - 1);
signed char var_7 = (signed char)-107;
long long int var_9 = 2882567963030324471LL;
unsigned short var_10 = (unsigned short)13560;
int zero = 0;
long long int var_11 = -3016905878005373371LL;
long long int var_12 = 4008536568046025611LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
