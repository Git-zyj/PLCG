#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)19935;
short var_8 = (short)-3653;
unsigned long long int var_9 = 5982173806923760174ULL;
signed char var_13 = (signed char)64;
int zero = 0;
unsigned short var_17 = (unsigned short)19269;
long long int var_18 = -7692430779321202087LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
