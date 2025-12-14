#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)97;
long long int var_4 = -2001175039899589176LL;
long long int var_7 = -5307389963626649287LL;
int var_12 = -141622116;
signed char var_15 = (signed char)61;
unsigned long long int var_17 = 1767900009746068703ULL;
int zero = 0;
unsigned int var_18 = 165516098U;
long long int var_19 = 8876043772674219352LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
