#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)26;
signed char var_10 = (signed char)-114;
signed char var_13 = (signed char)67;
long long int var_14 = -6652406193600932069LL;
signed char var_18 = (signed char)-45;
int zero = 0;
signed char var_20 = (signed char)77;
signed char var_21 = (signed char)-109;
signed char var_22 = (signed char)46;
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
