#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1152944826348239774LL;
unsigned char var_7 = (unsigned char)123;
short var_10 = (short)-7031;
int zero = 0;
signed char var_12 = (signed char)-125;
long long int var_13 = 5563524226670944551LL;
int var_14 = -162390281;
void init() {
}

void checksum() {
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
