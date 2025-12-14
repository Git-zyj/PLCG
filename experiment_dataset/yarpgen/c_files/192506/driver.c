#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2865958869U;
unsigned long long int var_1 = 12561547187110686016ULL;
long long int var_2 = -4186776414242342851LL;
long long int var_7 = 3158797277103976774LL;
int zero = 0;
unsigned char var_19 = (unsigned char)215;
long long int var_20 = -1029004807356388978LL;
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
