#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4191566609429880641LL;
unsigned int var_6 = 2529260905U;
long long int var_7 = -6443939462084955438LL;
long long int var_8 = 8246645186419945441LL;
signed char var_9 = (signed char)1;
long long int var_12 = 6898475932642071465LL;
signed char var_13 = (signed char)-57;
signed char var_17 = (signed char)-66;
int zero = 0;
signed char var_19 = (signed char)45;
short var_20 = (short)-28625;
unsigned int var_21 = 3862601390U;
long long int var_22 = 1681532414129276497LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
