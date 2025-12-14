#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)13;
short var_8 = (short)-19329;
unsigned long long int var_12 = 11047227639945893637ULL;
unsigned long long int var_17 = 15944076639901206437ULL;
int zero = 0;
unsigned long long int var_19 = 18398033875688341441ULL;
signed char var_20 = (signed char)-47;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
