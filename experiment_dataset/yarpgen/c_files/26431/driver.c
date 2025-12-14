#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)136;
long long int var_2 = -2950947937174582191LL;
long long int var_3 = -3906699837113229328LL;
long long int var_5 = 190152323100097419LL;
long long int var_6 = 3412975831390338566LL;
unsigned int var_8 = 2617109578U;
long long int var_10 = -7701670692451864776LL;
long long int var_11 = 886438547725725216LL;
long long int var_13 = 8541687546715342728LL;
long long int var_15 = -3682786778939374415LL;
unsigned int var_16 = 3178995583U;
int zero = 0;
unsigned long long int var_17 = 11979393329788545634ULL;
unsigned long long int var_18 = 13524439020563694693ULL;
unsigned int var_19 = 1783582035U;
int var_20 = 1682416594;
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
