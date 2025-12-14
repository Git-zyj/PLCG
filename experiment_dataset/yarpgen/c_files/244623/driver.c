#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8917710208026094617LL;
long long int var_3 = 5843356621585880281LL;
long long int var_8 = -6912990235964468987LL;
int zero = 0;
long long int var_10 = -2584903706273577888LL;
long long int var_11 = -389560365559255492LL;
long long int var_12 = 3343398366271624915LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
