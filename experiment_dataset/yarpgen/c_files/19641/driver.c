#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7958989748917198836ULL;
unsigned char var_4 = (unsigned char)90;
short var_7 = (short)-10764;
int var_8 = -1051303776;
int var_9 = -1233125008;
short var_10 = (short)7032;
int zero = 0;
int var_16 = 731715159;
long long int var_17 = -7887258257227636644LL;
void init() {
}

void checksum() {
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
