#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 4944269205977484517LL;
int var_6 = 784982720;
short var_8 = (short)-9748;
signed char var_9 = (signed char)93;
short var_15 = (short)-7319;
int zero = 0;
unsigned int var_18 = 1349368281U;
long long int var_19 = 3250994493040507841LL;
unsigned long long int var_20 = 17038673166938361558ULL;
void init() {
}

void checksum() {
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
