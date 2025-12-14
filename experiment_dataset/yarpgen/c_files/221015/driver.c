#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 935970924U;
int var_4 = -1652343809;
long long int var_8 = 8809244619921408335LL;
signed char var_10 = (signed char)57;
unsigned short var_16 = (unsigned short)11489;
int zero = 0;
unsigned int var_17 = 3365550253U;
long long int var_18 = -6984015004806637141LL;
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
