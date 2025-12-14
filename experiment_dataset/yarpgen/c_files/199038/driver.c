#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2257691347487557938LL;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)-19;
int zero = 0;
signed char var_17 = (signed char)-45;
short var_18 = (short)25950;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
