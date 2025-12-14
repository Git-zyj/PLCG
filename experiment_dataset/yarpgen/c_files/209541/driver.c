#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-15;
long long int var_5 = -8985449683894562205LL;
unsigned short var_9 = (unsigned short)65509;
signed char var_10 = (signed char)-60;
int zero = 0;
signed char var_11 = (signed char)6;
signed char var_12 = (signed char)-1;
long long int var_13 = -2036336087395635240LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
