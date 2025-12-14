#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1156373887U;
long long int var_3 = 9222468879127329145LL;
unsigned int var_5 = 2037153011U;
unsigned short var_8 = (unsigned short)38597;
signed char var_9 = (signed char)76;
long long int var_11 = 7090692298498506563LL;
int zero = 0;
signed char var_17 = (signed char)115;
signed char var_18 = (signed char)-87;
unsigned char var_19 = (unsigned char)152;
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
