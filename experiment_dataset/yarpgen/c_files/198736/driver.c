#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7734256296340151421LL;
int var_5 = -493101312;
signed char var_7 = (signed char)-52;
unsigned int var_9 = 802249790U;
int zero = 0;
int var_12 = -385083663;
short var_13 = (short)-1291;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
