#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)249;
unsigned long long int var_2 = 5217103397288880120ULL;
unsigned long long int var_4 = 12232198392871186472ULL;
long long int var_13 = -1008312736540993319LL;
int zero = 0;
unsigned short var_20 = (unsigned short)24439;
int var_21 = -1957025750;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
