#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)111;
signed char var_1 = (signed char)-80;
signed char var_3 = (signed char)-52;
unsigned long long int var_7 = 9123656901345862082ULL;
short var_10 = (short)30384;
unsigned long long int var_14 = 7169237289592454905ULL;
long long int var_16 = -774227705443515773LL;
int zero = 0;
long long int var_18 = -6045121191891889430LL;
unsigned long long int var_19 = 9449274069692731309ULL;
long long int var_20 = -1846169441348612996LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
