#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8134443699254288224LL;
long long int var_1 = 1325630376863278999LL;
unsigned long long int var_2 = 7155670530828192460ULL;
unsigned long long int var_8 = 15105738045349635498ULL;
int zero = 0;
long long int var_10 = -8022481179236838380LL;
long long int var_11 = -3286177883504371857LL;
unsigned long long int var_12 = 5287914089252463506ULL;
unsigned long long int var_13 = 11387931325991495515ULL;
signed char var_14 = (signed char)-2;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
