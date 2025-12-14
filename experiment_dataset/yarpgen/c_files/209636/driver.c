#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)127;
signed char var_4 = (signed char)-41;
signed char var_14 = (signed char)65;
unsigned long long int var_16 = 16750931153983954664ULL;
int zero = 0;
unsigned long long int var_17 = 8549282048012603667ULL;
signed char var_18 = (signed char)-33;
long long int var_19 = -4138586660247002741LL;
void init() {
}

void checksum() {
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
