#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7456098542687428359ULL;
signed char var_7 = (signed char)17;
signed char var_9 = (signed char)50;
signed char var_10 = (signed char)-38;
int zero = 0;
unsigned int var_18 = 1098987212U;
unsigned int var_19 = 682481304U;
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
