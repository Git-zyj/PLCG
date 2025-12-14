#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2035082111U;
signed char var_4 = (signed char)73;
long long int var_17 = -2077599405668003661LL;
int zero = 0;
long long int var_20 = 4459288515825536929LL;
long long int var_21 = 2315953789982625248LL;
long long int var_22 = 7138749869675284987LL;
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
