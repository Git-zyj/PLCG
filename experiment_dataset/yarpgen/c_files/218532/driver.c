#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)53883;
unsigned int var_5 = 1284909063U;
unsigned short var_6 = (unsigned short)50343;
long long int var_9 = 2622039481933548048LL;
int zero = 0;
signed char var_11 = (signed char)40;
unsigned long long int var_12 = 5055605873794765750ULL;
int var_13 = 2099572081;
long long int var_14 = -7716278399635276882LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
