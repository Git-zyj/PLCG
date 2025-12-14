#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 5085442180495923205LL;
signed char var_12 = (signed char)108;
long long int var_13 = -2793630897303286127LL;
signed char var_14 = (signed char)81;
signed char var_15 = (signed char)-63;
int zero = 0;
unsigned char var_17 = (unsigned char)29;
signed char var_18 = (signed char)-27;
short var_19 = (short)17814;
void init() {
}

void checksum() {
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
