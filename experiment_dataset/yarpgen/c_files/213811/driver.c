#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)8;
long long int var_6 = 6669129943472115535LL;
signed char var_7 = (signed char)-19;
unsigned long long int var_9 = 12748459473580038506ULL;
unsigned long long int var_12 = 13084016548278682239ULL;
int zero = 0;
long long int var_15 = 5198888629887950628LL;
signed char var_16 = (signed char)-20;
signed char var_17 = (signed char)-73;
int var_18 = 1119339793;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
