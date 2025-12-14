#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5510614727394638828ULL;
unsigned short var_2 = (unsigned short)36087;
unsigned int var_12 = 2804293913U;
int zero = 0;
int var_13 = 984925217;
unsigned short var_14 = (unsigned short)7823;
unsigned long long int var_15 = 13165101465231913167ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
