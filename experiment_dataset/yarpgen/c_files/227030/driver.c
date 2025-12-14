#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 877809498756885562LL;
unsigned int var_5 = 1050983490U;
long long int var_9 = 5265845739740302073LL;
int zero = 0;
int var_10 = 2096636949;
int var_11 = 941433737;
short var_12 = (short)-2281;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
