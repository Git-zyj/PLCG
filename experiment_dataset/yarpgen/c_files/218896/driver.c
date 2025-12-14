#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)93;
unsigned char var_4 = (unsigned char)129;
int var_7 = 1537997176;
int var_11 = -1444248788;
int zero = 0;
short var_13 = (short)19973;
signed char var_14 = (signed char)-123;
short var_15 = (short)-7095;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
