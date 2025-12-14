#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)24939;
unsigned short var_6 = (unsigned short)46355;
short var_9 = (short)4294;
int zero = 0;
unsigned long long int var_13 = 16921582418517870282ULL;
long long int var_14 = 632929857553281709LL;
short var_15 = (short)-30244;
signed char var_16 = (signed char)-37;
short var_17 = (short)15946;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
