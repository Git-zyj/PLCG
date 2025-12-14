#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4730290890090981895LL;
signed char var_5 = (signed char)-97;
long long int var_8 = 3930024911756698530LL;
long long int var_9 = -997377437639313572LL;
long long int var_10 = 9077354932186414257LL;
unsigned long long int var_13 = 12552873909759444267ULL;
int zero = 0;
signed char var_16 = (signed char)-69;
signed char var_17 = (signed char)-69;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
