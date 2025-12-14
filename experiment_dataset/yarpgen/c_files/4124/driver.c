#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7236388409372844240LL;
unsigned long long int var_7 = 8136450029720697325ULL;
signed char var_9 = (signed char)-43;
int zero = 0;
signed char var_14 = (signed char)-20;
unsigned long long int var_15 = 13227565609437740352ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
