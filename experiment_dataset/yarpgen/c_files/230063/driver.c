#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5359221133048506778LL;
unsigned int var_2 = 1490674175U;
unsigned char var_6 = (unsigned char)138;
signed char var_10 = (signed char)35;
signed char var_12 = (signed char)-2;
signed char var_13 = (signed char)107;
unsigned long long int var_14 = 17161174398087317821ULL;
int zero = 0;
signed char var_16 = (signed char)20;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-103;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
