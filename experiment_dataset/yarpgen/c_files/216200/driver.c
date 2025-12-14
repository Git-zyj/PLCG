#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -6641693039363053596LL;
int var_9 = 862626662;
signed char var_14 = (signed char)-49;
int var_15 = -2137604191;
int zero = 0;
short var_20 = (short)-25938;
int var_21 = 1182779763;
signed char var_22 = (signed char)-66;
void init() {
}

void checksum() {
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
