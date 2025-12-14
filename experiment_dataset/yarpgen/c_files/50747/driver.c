#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-45;
long long int var_4 = -5169143260893058158LL;
long long int var_7 = -1964380294516336211LL;
int var_8 = -1808235373;
unsigned char var_9 = (unsigned char)241;
int zero = 0;
unsigned char var_10 = (unsigned char)37;
short var_11 = (short)27201;
signed char var_12 = (signed char)7;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
