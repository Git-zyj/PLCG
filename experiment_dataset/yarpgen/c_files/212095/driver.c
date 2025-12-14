#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9213593747461248322ULL;
signed char var_2 = (signed char)-45;
unsigned long long int var_9 = 726847693877617299ULL;
unsigned long long int var_12 = 6592275382463850554ULL;
unsigned long long int var_13 = 6720073243511175302ULL;
int zero = 0;
int var_17 = 789185898;
int var_18 = 234064654;
unsigned long long int var_19 = 1418549035897684950ULL;
unsigned long long int var_20 = 7670532200629130456ULL;
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
