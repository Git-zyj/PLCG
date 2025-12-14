#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)31236;
unsigned short var_5 = (unsigned short)15611;
long long int var_6 = 3364142806432909727LL;
unsigned long long int var_7 = 1595253322035124228ULL;
long long int var_8 = 8419182510992620168LL;
long long int var_9 = 2536392212189393240LL;
int zero = 0;
unsigned int var_11 = 1397824306U;
signed char var_12 = (signed char)-75;
void init() {
}

void checksum() {
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
