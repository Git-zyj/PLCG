#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-68;
unsigned long long int var_2 = 9826331554514006958ULL;
unsigned char var_5 = (unsigned char)201;
signed char var_9 = (signed char)-50;
int var_11 = 1319983974;
int zero = 0;
int var_18 = -1186495079;
int var_19 = -1734704970;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
