#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4455959402039828366ULL;
unsigned long long int var_4 = 2425058420191974741ULL;
int var_7 = -790587303;
int zero = 0;
signed char var_18 = (signed char)15;
int var_19 = -1307396322;
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
