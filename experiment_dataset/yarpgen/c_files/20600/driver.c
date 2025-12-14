#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)73;
_Bool var_12 = (_Bool)1;
signed char var_14 = (signed char)113;
int zero = 0;
signed char var_17 = (signed char)5;
signed char var_18 = (signed char)-69;
unsigned long long int var_19 = 423941559968957925ULL;
unsigned long long int var_20 = 8649593837008101454ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
