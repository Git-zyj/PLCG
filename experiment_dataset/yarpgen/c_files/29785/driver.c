#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)249;
int var_3 = 1389726134;
int var_4 = 723732364;
signed char var_5 = (signed char)118;
long long int var_8 = 2190217605075925586LL;
signed char var_10 = (signed char)50;
int zero = 0;
long long int var_12 = -8548171361741315982LL;
int var_13 = 1737718486;
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
