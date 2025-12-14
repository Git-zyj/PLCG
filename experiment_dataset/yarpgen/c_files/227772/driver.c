#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14988949888476648087ULL;
long long int var_6 = -8959066242133376175LL;
signed char var_8 = (signed char)-70;
int zero = 0;
long long int var_13 = -1087760251922239683LL;
unsigned int var_14 = 1700161262U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
