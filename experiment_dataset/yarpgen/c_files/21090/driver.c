#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)68;
unsigned char var_4 = (unsigned char)219;
signed char var_6 = (signed char)81;
int zero = 0;
long long int var_15 = 8408372506843751088LL;
long long int var_16 = -8419532926782810033LL;
long long int var_17 = -3947963789819157792LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
