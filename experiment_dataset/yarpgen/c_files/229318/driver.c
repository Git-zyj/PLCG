#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 15313702537626929359ULL;
unsigned short var_8 = (unsigned short)35374;
short var_9 = (short)16309;
int zero = 0;
unsigned char var_15 = (unsigned char)60;
long long int var_16 = -6663773320282514246LL;
void init() {
}

void checksum() {
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
