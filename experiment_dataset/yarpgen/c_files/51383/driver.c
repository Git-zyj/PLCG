#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-28;
unsigned short var_8 = (unsigned short)38790;
int var_18 = -1591718209;
int zero = 0;
unsigned long long int var_20 = 14698266519860711236ULL;
signed char var_21 = (signed char)69;
unsigned short var_22 = (unsigned short)40590;
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
