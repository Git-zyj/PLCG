#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5087719420538333549LL;
short var_2 = (short)5807;
short var_3 = (short)9909;
unsigned int var_9 = 3757901803U;
long long int var_10 = 3060771336806464485LL;
int zero = 0;
unsigned int var_11 = 3291765611U;
unsigned long long int var_12 = 17566889690196249333ULL;
short var_13 = (short)-19127;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
