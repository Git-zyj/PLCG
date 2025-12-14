#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-47;
long long int var_1 = 6119466823999480964LL;
unsigned long long int var_10 = 14632004235081043796ULL;
unsigned long long int var_11 = 1456295320443557998ULL;
int zero = 0;
short var_19 = (short)-16609;
long long int var_20 = 5910511727695150580LL;
signed char var_21 = (signed char)23;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
