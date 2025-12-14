#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-72;
unsigned int var_7 = 2770245790U;
signed char var_9 = (signed char)98;
int zero = 0;
signed char var_16 = (signed char)-8;
signed char var_17 = (signed char)108;
signed char var_18 = (signed char)52;
unsigned int var_19 = 510455391U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
