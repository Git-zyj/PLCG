#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-74;
unsigned int var_6 = 3267452935U;
unsigned int var_7 = 913202406U;
long long int var_9 = -2477530878962415632LL;
int zero = 0;
long long int var_10 = 2639429641481377669LL;
unsigned int var_11 = 3335753447U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
