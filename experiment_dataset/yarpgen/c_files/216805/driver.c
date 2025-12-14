#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7303153282680388683LL;
long long int var_5 = 1340826555287037273LL;
long long int var_11 = -7182471014895718562LL;
long long int var_12 = -8967287370011198097LL;
int zero = 0;
signed char var_20 = (signed char)-114;
short var_21 = (short)-2770;
long long int var_22 = 3905172358178468529LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
