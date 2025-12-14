#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_12 = 715017440075448085ULL;
int zero = 0;
int var_17 = -1968570307;
unsigned long long int var_18 = 12569041487826621377ULL;
unsigned long long int var_19 = 83460406299656192ULL;
unsigned long long int var_20 = 12718692356076001739ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
