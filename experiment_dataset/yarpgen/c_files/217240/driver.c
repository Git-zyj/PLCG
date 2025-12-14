#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 711926924;
long long int var_9 = 8572134794673022857LL;
unsigned long long int var_11 = 10142989243295218162ULL;
int zero = 0;
long long int var_14 = -3030614414076481848LL;
unsigned long long int var_15 = 15850600445969751549ULL;
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
