#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-10;
signed char var_4 = (signed char)104;
long long int var_7 = -7928080760264808959LL;
signed char var_8 = (signed char)68;
signed char var_9 = (signed char)64;
int zero = 0;
unsigned int var_11 = 2998966976U;
signed char var_12 = (signed char)70;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
