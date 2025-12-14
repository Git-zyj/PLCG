#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)32048;
long long int var_10 = 3417525883266495956LL;
unsigned char var_14 = (unsigned char)251;
int zero = 0;
unsigned char var_19 = (unsigned char)89;
short var_20 = (short)-12853;
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
