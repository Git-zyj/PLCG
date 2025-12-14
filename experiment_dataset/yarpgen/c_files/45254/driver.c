#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9171090124702253296ULL;
short var_6 = (short)-12719;
short var_7 = (short)-174;
short var_8 = (short)-1727;
unsigned long long int var_10 = 15570082040159136805ULL;
int zero = 0;
short var_16 = (short)32408;
short var_17 = (short)-29063;
unsigned long long int var_18 = 6675928040953779759ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
