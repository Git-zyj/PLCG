#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1847586602;
unsigned long long int var_8 = 16323228568633634892ULL;
short var_11 = (short)-27672;
int zero = 0;
int var_17 = -1887801316;
long long int var_18 = -1636779251328886283LL;
unsigned char var_19 = (unsigned char)102;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
