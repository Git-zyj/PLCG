#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 464012816719821913LL;
unsigned int var_6 = 2121156905U;
long long int var_8 = 5067563317717336186LL;
unsigned short var_12 = (unsigned short)44738;
int zero = 0;
long long int var_14 = 9119063928182900612LL;
unsigned int var_15 = 830156493U;
unsigned long long int var_16 = 16009511359051882536ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
