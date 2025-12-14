#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 18282548611863253272ULL;
unsigned char var_9 = (unsigned char)26;
long long int var_13 = 6764469047496508039LL;
int zero = 0;
int var_16 = -1376421313;
short var_17 = (short)-11867;
long long int var_18 = 8600542908312955437LL;
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
