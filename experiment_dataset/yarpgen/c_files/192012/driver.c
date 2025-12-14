#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)81;
unsigned long long int var_12 = 3443739568137482852ULL;
int zero = 0;
int var_16 = -940542980;
unsigned short var_17 = (unsigned short)31079;
signed char var_18 = (signed char)26;
int var_19 = -2060849512;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
