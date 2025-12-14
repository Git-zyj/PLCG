#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5510619309550377206LL;
int var_3 = -404307319;
unsigned char var_5 = (unsigned char)86;
long long int var_6 = -2187940871324867157LL;
int var_7 = 1437943508;
signed char var_9 = (signed char)-117;
int zero = 0;
int var_11 = 781968859;
long long int var_12 = 1965452880354100684LL;
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
